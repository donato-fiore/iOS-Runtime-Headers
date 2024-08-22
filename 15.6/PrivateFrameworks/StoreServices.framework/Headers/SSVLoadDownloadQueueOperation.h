// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSVLOADDOWNLOADQUEUEOPERATION_H
#define SSVLOADDOWNLOADQUEUEOPERATION_H

@class NSNumber, NSMutableOrderedSet, NSMutableArray, NSString, NSLock, NSURL;


#import "SSVComplexOperation.h"
#import "SSURLRequestProperties.h"

@interface SSVLoadDownloadQueueOperation : SSVComplexOperation {
    NSNumber *_accountIdentifier;
    NSMutableOrderedSet *_downloads;
    BOOL _needsAuthentication;
    NSMutableArray *_rangesToLoad;
    NSInteger _reason;
    NSString *_requestIdentifier;
    SSURLRequestProperties *_requestProperties;
    NSString *_mdSyncState;
    NSLock *_lock;
}


@property (retain) NSNumber *accountIdentifier;
@property (readonly) NSMutableOrderedSet *downloads;
@property BOOL needsAuthentication;
@property (retain) NSString *powerAssertionIdentifier; // ivar: _powerAssertionIdentifier
@property NSInteger reason;
@property (copy) NSString *requestIdentifier;
@property (readonly) SSURLRequestProperties *requestProperties;
@property (copy, nonatomic) NSURL *requestURL; // ivar: _requestURL
@property (copy, nonatomic) NSString *storeCorrelationID; // ivar: _storeCorrelationID


+(id)newLoadAutomaticDownloadQueueOperation;
-(BOOL)_loadDownloadsFromStart:(id)arg0 toEnd:(id)arg1 url:(id)arg2 ;
-(BOOL)featureEnabledForBagKey:(id)arg0 bagContext:(id)arg1 error:(*id)arg2 ;
-(id)_account;
-(id)_newURLOperationWithStartIdentifier:(id)arg0 endIdentifier:(id)arg1 url:(id)arg2 ;
-(id)gzipData:(id)arg0 ;
-(id)init;
-(id)initWithRequestProperties:(id)arg0 ;
-(id)resolveBagURLForKey:(id)arg0 bagContext:(id)arg1 error:(*id)arg2 ;
-(void)_handleResponse:(id)arg0 ;
-(void)addGUIDToBody:(id)arg0 ;
-(void)addKeybagSyncToBody:(id)arg0 ;
-(void)importKeybagSync:(id)arg0 ;
-(void)lock;
-(void)main;
-(void)unlock;


@end


#endif