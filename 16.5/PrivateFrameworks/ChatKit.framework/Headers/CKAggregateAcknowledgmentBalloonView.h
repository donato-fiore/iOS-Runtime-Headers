// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKAGGREGATEACKNOWLEDGMENTBALLOONVIEW_H
#define CKAGGREGATEACKNOWLEDGMENTBALLOONVIEW_H

@class UIImageView, UIView<CKGradientReferenceView>;


#import "CKAcknowledgmentBalloonView.h"
#import "CKGradientView.h"

@interface CKAggregateAcknowledgmentBalloonView : CKAcknowledgmentBalloonView {
    CKGradientView *_gradientView;
    UIImageView *_backgroundView;
    UIImageView *_solidPartsView;
}


@property (nonatomic) char gradientColor; // ivar: _gradientColor
@property (weak, nonatomic) UIView<CKGradientReferenceView> *gradientReferenceView; // ivar: _gradientReferenceView
@property (nonatomic) BOOL invertTailDirection; // ivar: _invertTailDirection
@property (nonatomic) char solidColor; // ivar: _solidColor


+(id)_middleBubbleInvertedTailSquareImageWithTraitCollection:(id)arg0 ;
+(id)_middleBubbleSquareImageWithTraitCollection:(id)arg0 ;
+(id)_topBubbleInvertedTailSquareImageWithTraitCollection:(id)arg0 ;
+(id)_topBubbleSquareImageWithTraitCollection:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configureForAggregateAcknowledgmentChatItem:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForDisplay;
-(void)prepareForReuse;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif