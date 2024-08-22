// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFHOMEACCESSORYACTIONVIEW_H
#define WFHOMEACCESSORYACTIONVIEW_H

@class WFActionCustomView, NSString, UIStackView;
@protocol WFActionEventObserver;



@interface WFHomeAccessoryActionView : WFActionCustomView <WFActionEventObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIStackView *iconsStackView; // ivar: _iconsStackView
@property (readonly) Class superclass;


+(CGFloat)preferredHeightForAction:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)action:(id)arg0 parameterStateDidChangeForKey:(id)arg1 ;
-(void)setAction:(id)arg0 ;
-(void)updateIcons;


@end


#endif