// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HMTELEVISIONPROFILE_H
#define _HMTELEVISIONPROFILE_H

@class NSArray;
@protocol _HMTelevisionProfileDelegate;


#import "HMAccessoryProfile.h"

@interface _HMTelevisionProfile : HMAccessoryProfile

@property (weak) NSObject<_HMTelevisionProfileDelegate> *delegate; // ivar: _delegate
@property (retain) NSArray *mediaSourceDisplayOrder; // ivar: _mediaSourceDisplayOrder
@property (readonly) BOOL mediaSourceDisplayOrderModifiable; // ivar: _mediaSourceDisplayOrderModifiable


-(BOOL)isMediaSourceDisplayOrderModifiable;
-(id)initWithTelevisionService:(id)arg0 linkedServices:(id)arg1 ;
-(id)messageDestination;
-(id)messageReceiveQueue;
-(id)messageTargetUUID;
-(void)_handleSourceDisplayOrderUpdated:(id)arg0 ;
-(void)_notifyDelegateOfUpdatedSourceDisplayOrder:(id)arg0 ;
-(void)_registerNotificationHandlers;
-(void)updateMediaSourceDisplayOrder:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif