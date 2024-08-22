// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPUIMASKEDLABELSSTACKVIEW_H
#define SPUIMASKEDLABELSSTACKVIEW_H

@class NUIContainerStackView, TLKLabel, NSString, TLKProminenceView, UIView, UIFont;
@protocol NUIContainerViewDelegate;



@interface SPUIMaskedLabelsStackView : NUIContainerStackView <NUIContainerViewDelegate>



@property (readonly, nonatomic) TLKLabel *bridgeLabel; // ivar: _bridgeLabel
@property (readonly, nonatomic) TLKLabel *completionLabel; // ivar: _completionLabel
@property CGFloat completionStringOffset; // ivar: _completionStringOffset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TLKLabel *extensionLabel; // ivar: _extensionLabel
@property (retain) TLKProminenceView *extensionLabelProminenceView; // ivar: _extensionLabelProminenceView
@property (retain) UIView *fillerView; // ivar: _fillerView
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (retain) UIView *gradientView; // ivar: _gradientView
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *typedString; // ivar: _typedString


+(Class)layerClass;
-(BOOL)isRTL;
-(id)init;
-(struct CGRect )containerView:(id)arg0 layoutFrameForArrangedSubview:(id)arg1 withProposedFrame:(struct CGRect )arg2 ;
-(void)containerViewDidLayoutArrangedSubviews:(id)arg0 ;
-(void)resetStringOffset;


@end


#endif