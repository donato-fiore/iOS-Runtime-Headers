// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKEVENTTRAVELDETAILITEM_H
#define EKEVENTTRAVELDETAILITEM_H



#import "EKEventDetailItem.h"

@interface EKEventTravelDetailItem : EKEventDetailItem



-(BOOL)_canChangeTravelTime;
-(BOOL)editItemViewControllerSave:(id)arg0 ;
-(BOOL)editItemViewControllerShouldShowDetachAlert;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)detailViewControllerWithFrame:(struct CGRect )arg0 forSubitemAtIndex:(NSUInteger)arg1 ;


@end


#endif