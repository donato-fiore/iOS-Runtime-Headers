// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKTIMESCOPECONTROL_H
#define HKTIMESCOPECONTROL_H

@class UIControl, NSArray;



@interface HKTimeScopeControl : UIControl {
    NSArray *_timeScopes;
    BOOL _shortTextStyle;
}


@property (nonatomic) NSInteger selectedTimeScope; // ivar: _selectedTimeScope


+(id)controlWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 timeScopes:(id)arg2 shortTextStyle:(BOOL)arg3 ;
-(NSInteger)_indexForTimeScope:(NSInteger)arg0 ;
-(NSInteger)_timeScopeForIndex:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 timeScopes:(id)arg1 shortTextStyle:(BOOL)arg2 ;


@end


#endif