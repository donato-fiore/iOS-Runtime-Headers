// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKTRUNCATEDTEXTBALLOONVIEW_H
#define CKTRUNCATEDTEXTBALLOONVIEW_H

@class UIImageView, NSString;
@protocol NSLayoutManagerDelegate;


#import "CKHyperlinkBalloonView.h"

@interface CKTruncatedTextBalloonView : CKHyperlinkBalloonView <NSLayoutManagerDelegate>



@property (nonatomic) BOOL avoidTextLineBreaks; // ivar: _avoidTextLineBreaks
@property (retain, nonatomic) UIImageView *chevron; // ivar: _chevron
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsChevron; // ivar: _wantsChevron


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(void)configureForMessagePart:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForDisplay;


@end


#endif