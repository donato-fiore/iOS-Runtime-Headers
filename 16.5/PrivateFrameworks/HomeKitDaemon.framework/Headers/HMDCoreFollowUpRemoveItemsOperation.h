// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCOREFOLLOWUPREMOVEITEMSOPERATION_H
#define HMDCOREFOLLOWUPREMOVEITEMSOPERATION_H

@class HMFOperation, NSArray;
@protocol HMDFollowUpController;



@interface HMDCoreFollowUpRemoveItemsOperation : HMFOperation

@property (retain, nonatomic) NSObject<HMDFollowUpController> *followUpController; // ivar: _followUpController
@property (copy, nonatomic) NSArray *identifiersToRemove; // ivar: _identifiersToRemove


-(id)initWithIdentifiersToRemove:(id)arg0 followUpController:(id)arg1 ;
-(void)main;


@end


#endif