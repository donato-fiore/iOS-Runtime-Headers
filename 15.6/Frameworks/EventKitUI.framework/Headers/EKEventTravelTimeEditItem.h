// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKEVENTTRAVELTIMEEDITITEM_H
#define EKEVENTTRAVELTIMEEDITITEM_H



#import "EKEventEditItem.h"

@interface EKEventTravelTimeEditItem : EKEventEditItem {
    BOOL _isHidden;
}




-(BOOL)editItemViewControllerSave:(id)arg0 ;
-(BOOL)forceRefreshStartAndEndDatesOnSave;
-(BOOL)isInline;
-(NSUInteger)numberOfSubitems;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)detailViewControllerWithFrame:(struct CGRect )arg0 forSubitemAtIndex:(NSUInteger)arg1 ;
-(void)_updateHiddenState;


@end


#endif