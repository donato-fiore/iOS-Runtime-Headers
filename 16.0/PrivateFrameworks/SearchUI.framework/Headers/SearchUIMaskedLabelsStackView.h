// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUIMASKEDLABELSSTACKVIEW_H
#define SEARCHUIMASKEDLABELSSTACKVIEW_H

@class NUIContainerStackView, TLKLabel, UIColor, NSString, UIView, UIFont;
@protocol NUIContainerViewDelegate;



@interface SearchUIMaskedLabelsStackView : NUIContainerStackView <NUIContainerViewDelegate>



@property (readonly, nonatomic) TLKLabel *bridgeLabel; // ivar: _bridgeLabel
@property (retain, nonatomic) UIColor *completionFillColor; // ivar: _completionFillColor
@property (readonly, nonatomic) TLKLabel *completionLabel; // ivar: _completionLabel
@property CGFloat completionStringOffset; // ivar: _completionStringOffset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TLKLabel *extensionLabel; // ivar: _extensionLabel
@property (retain) UIView *extensionLabelBackgroundView; // ivar: _extensionLabelBackgroundView
@property (retain) UIView *fillerView; // ivar: _fillerView
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (retain) UIView *gradientView; // ivar: _gradientView
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *typedString; // ivar: _typedString


+(Class)layerClass;
-(id)init;
-(struct CGRect )containerView:(id)arg0 layoutFrameForArrangedSubview:(id)arg1 withProposedFrame:(struct CGRect )arg2 ;
-(void)containerViewDidLayoutArrangedSubviews:(id)arg0 ;
-(void)layoutMasksAndLabels;
-(void)resetStringOffset;


@end


#endif