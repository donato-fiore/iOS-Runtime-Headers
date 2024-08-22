// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RCREMOTECHANGEMERGER_H
#define RCREMOTECHANGEMERGER_H

@class NSMutableDictionary, NSString;
@protocol RCStoreChangeMergerDelegate, RCRemoteChangeMergerDelegate;

#import <Foundation/Foundation.h>


@interface RCRemoteChangeMerger : NSObject <RCStoreChangeMergerDelegate>

 {
    NSMutableDictionary *storeMergers;
    NSString *_encryptedStoreId;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RCRemoteChangeMergerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithStores:(id)arg0 viewContext:(id)arg1 transactionAuthorToObserve:(id)arg2 ;
-(void)_handleRemoteChangeNotification:(id)arg0 ;
-(void)recordingWasInserted;


@end


#endif