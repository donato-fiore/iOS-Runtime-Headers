// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKTITLEDIMAGEBALLOONVIEW_H
#define CKTITLEDIMAGEBALLOONVIEW_H

@class UIImageView, UIVisualEffectView, NSString, UILabel;
@protocol CKTitledImageBalloonViewDelegate;


#import "CKImageBalloonView.h"

@interface CKTitledImageBalloonView : CKImageBalloonView

@property (retain, nonatomic) UIImageView *chevron; // ivar: _chevron
@property (weak, nonatomic) NSObject<CKTitledImageBalloonViewDelegate> *delegate;
@property (retain, nonatomic) UIVisualEffectView *effectView; // ivar: _effectView
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)configureForLocatingChatItem:(id)arg0 ;
-(void)configureForMediaObject:(id)arg0 previewWidth:(CGFloat)arg1 orientation:(char)arg2 hasInvisibleInkEffect:(BOOL)arg3 ;
-(void)layoutSubviews;
-(void)prepareForDisplay;
-(void)prepareForReuse;
-(void)setOrientation:(char)arg0 ;
-(void)tapGestureRecognized:(id)arg0 ;


@end


#endif