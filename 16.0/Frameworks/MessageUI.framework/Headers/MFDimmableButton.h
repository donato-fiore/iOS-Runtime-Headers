// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFDIMMABLEBUTTON_H
#define MFDIMMABLEBUTTON_H

@class UIButton;



@interface MFDimmableButton : UIButton

@property (readonly, nonatomic) NSUInteger autohidePreference;
@property (nonatomic, getter=isDimmed) BOOL dimmed; // ivar: _dimmed
@property (nonatomic) BOOL hidesWhenDimmedIfNotSelected; // ivar: _hidesWhenDimmedIfNotSelected
@property (nonatomic) BOOL stickyHiddenValue; // ivar: _stickyHiddenValue


-(NSUInteger)state;
-(void)_setHidden:(BOOL)arg0 external:(BOOL)arg1 ;
-(void)_updateDimmedHidingIfNecessary;
-(void)setHidden:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif