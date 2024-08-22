// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVMOBILETITLEBARVIEW_H
#define AVMOBILETITLEBARVIEW_H

@class UIView, CAGradientLayer, UILabel, NSString;
@protocol AVMobileTitlebarViewDelegate;


#import "AVView.h"
#import "AVMobileContentTagView.h"
#import "AVButton.h"
#import "AVMobileContentTag.h"
#import "AVMobileChromelessControlsStyleSheet.h"

@interface AVMobileTitlebarView : AVView {
    UIView *_contentContainerView;
    CAGradientLayer *_contentContainerViewMask;
    AVMobileContentTagView *_contentTagView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    AVButton *_infoAffordance;
}


@property (retain, nonatomic) AVMobileContentTag *contentTag; // ivar: _contentTag
@property (retain, nonatomic) NSObject<AVMobileTitlebarViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL showsInfoAffordance; // ivar: _showsInfoAffordance
@property (retain, nonatomic) AVMobileChromelessControlsStyleSheet *styleSheet; // ivar: _styleSheet
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) NSString *title; // ivar: _title


-(id)initWithStyleSheet:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_infoAffordancePressed:(id)arg0 ;
-(void)avkit_intrinsicContentSizeOfSubviewWasInvalidated:(id)arg0 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;


@end


#endif