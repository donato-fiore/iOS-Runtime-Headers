// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFCOMPOSEMULTIVIEW_H
#define MFCOMPOSEMULTIVIEW_H

@class CNComposeHeaderLabelView, UILabel, NSString;
@protocol PKScribbleInteractionDelegate, PKScribbleInteractionElementSource, MFComposeMultiViewDelegate;


#import "MFMailComposeHeaderView.h"
#import "MFActivityIndicatorLabel.h"

@interface MFComposeMultiView : MFMailComposeHeaderView <PKScribbleInteractionDelegate, PKScribbleInteractionElementSource>

 {
    MFActivityIndicatorLabel *_accountLabel;
    CNComposeHeaderLabelView *_imageSizeHeaderLabelView;
    UILabel *_imageSizeLabel;
    UILabel *_placeholderImageSizeLabel;
    BOOL _imageSizeShown;
    NSString *_accountDescription;
}


@property (nonatomic, getter=isAccountAutoselected) BOOL accountAutoselected; // ivar: _accountAutoselected
@property (nonatomic) BOOL accountHasUnsafeDomain; // ivar: _accountHasUnsafeDomain
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<MFComposeMultiViewDelegate> *scribbleDelegate; // ivar: _scribbleDelegate
@property (readonly) Class superclass;


-(BOOL)_scribbleInteraction:(id)arg0 focusWillTransformElement:(id)arg1 ;
-(BOOL)_scribbleInteraction:(id)arg0 shouldBeginAtLocation:(struct CGPoint )arg1 ;
-(id)_accountDescriptionAttributedString;
-(id)accountLabel;
-(id)imageSizeHeaderLabelView;
-(id)imageSizeLabel;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)labelColor;
-(id)placeholderImageSizeLabel;
-(struct CGRect )_scribbleInteraction:(id)arg0 frameForElement:(id)arg1 ;
-(void)_scribbleInteraction:(id)arg0 focusElement:(id)arg1 initialFocusSelectionReferencePoint:(struct CGPoint )arg2 completion:(id)arg3 ;
-(void)_scribbleInteraction:(id)arg0 requestElementsInRect:(struct CGRect )arg1 completion:(id)arg2 ;
-(void)layoutSubviews;
-(void)refreshPreferredContentSize;
-(void)setAccountDescription:(id)arg0 ;
-(void)setImageSizeDescription:(id)arg0 ;
-(void)setShowsImageSize:(BOOL)arg0 ;
-(void)showLoadingState:(BOOL)arg0 ;


@end


#endif