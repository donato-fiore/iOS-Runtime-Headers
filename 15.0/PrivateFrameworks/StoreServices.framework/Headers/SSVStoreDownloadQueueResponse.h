// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSVSTOREDOWNLOADQUEUERESPONSE_H
#define SSVSTOREDOWNLOADQUEUERESPONSE_H

@class NSMutableOrderedSet, NSError, NSDictionary, NSData, NSArray, NSNumber, NSString, NSOrderedSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SSVStoreDownloadQueueResponse : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableOrderedSet *_downloads;
    NSError *_error;
    NSDictionary *_itemErrors;
    NSData *_keybag;
    NSArray *_rangesToLoad;
    BOOL _shouldCancelPurchaseBatch;
    BOOL _triggeredQueueCheck;
    NSNumber *_userIdentifier;
}


@property NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly) NSOrderedSet *downloads;
@property (retain) NSError *error;
@property (readonly) NSData *keybag;
@property (readonly) NSArray *rangesToLoad;
@property BOOL shouldCancelPurchaseBatch;
@property NSString *storeCorrelationID; // ivar: _storeCorrelationID
@property BOOL triggeredQueueCheck;
@property (readonly) NSNumber *userIdentifier;


-(id)_errorWithFailureType:(id)arg0 customerMessage:(id)arg1 ;
-(id)_initStoreDownloadQueueResponse;
-(id)errorForItemIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithDictionary:(id)arg0 userIdentifier:(id)arg1 ;
-(id)initWithDictionary:(id)arg0 userIdentifier:(id)arg1 preferredAssetFlavor:(id)arg2 ;
-(id)initWithError:(id)arg0 userIdentifier:(id)arg1 ;


@end


#endif