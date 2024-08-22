// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCOREFOLLOWUPPOSTITEMOPERATION_H
#define HMDCOREFOLLOWUPPOSTITEMOPERATION_H

@class HMFOperation;
@protocol HMDFollowUpController, HMDFollowUpItem;



@interface HMDCoreFollowUpPostItemOperation : HMFOperation

@property (retain, nonatomic) NSObject<HMDFollowUpController> *followUpController; // ivar: _followUpController
@property (copy, nonatomic) NSObject<HMDFollowUpItem> *itemToPost; // ivar: _itemToPost


-(id)initWithItemToPost:(id)arg0 followUpController:(id)arg1 ;
-(void)main;


@end


#endif