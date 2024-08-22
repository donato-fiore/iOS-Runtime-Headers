// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKTIMESCOPECONTROLPILL_H
#define _HKTIMESCOPECONTROLPILL_H

@class NSArray;


#import "HKTimeScopeControl.h"

@interface _HKTimeScopeControlPill : HKTimeScopeControl {
    NSArray *_buttons;
    NSInteger _selectedButtonIndex;
}




-(NSInteger)selectedTimeScope;
-(id)_generateButtonsWithTimeScopes:(id)arg0 shortTextStyle:(BOOL)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 timeScopes:(id)arg1 shortTextStyle:(BOOL)arg2 ;
-(void)_buttonSelected:(id)arg0 ;
-(void)_deselectAllButtons;
-(void)_selectButtonAtIndex:(NSInteger)arg0 ;
-(void)_setSelectedButtonIndex:(NSInteger)arg0 ;
-(void)layoutSubviews;
-(void)setSelectedTimeScope:(NSInteger)arg0 ;


@end


#endif