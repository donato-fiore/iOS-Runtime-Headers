// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUICCTOGGLEBUTTON_H
#define HUICCTOGGLEBUTTON_H

@class UIControl, UIVisualEffectView, UIView, NSString, UILabel;
@protocol HACCContentModule, HACCContentModuleDelegate;



@interface HUICCToggleButton : UIControl <HACCContentModule>

 {
    UIVisualEffectView *_titleContainer;
    UIView *_subtitleContainer;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HACCContentModuleDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger module; // ivar: module
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(BOOL)enabled;
-(BOOL)isAccessibilityElement;
-(NSUInteger)accessibilityTraits;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)accessoryView;
-(id)contentValue;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setSubtitleText:(id)arg0 ;
-(void)setTitleText:(id)arg0 ;
-(void)updateValue;


@end


#endif