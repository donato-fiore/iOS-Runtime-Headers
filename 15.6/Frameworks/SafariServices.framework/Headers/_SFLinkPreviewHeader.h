// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFLINKPREVIEWHEADER_H
#define _SFLINKPREVIEWHEADER_H

@class UIView, NSString, _SFFluidProgressView;
@protocol SFLinkPreviewHeaderContentViewDelegate, _SFFluidProgressViewDelegate, _SFLinkPreviewHeaderDelegate;


#import "SFLinkPreviewHeaderContentView.h"

@interface _SFLinkPreviewHeader : UIView <SFLinkPreviewHeaderContentViewDelegate, _SFFluidProgressViewDelegate>

 {
    SFLinkPreviewHeaderContentView *_contentView;
    UIView *_hairline;
    BOOL _isMinimumPreviewUI;
    CGRect _lastLayoutBounds;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_SFLinkPreviewHeaderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *domain; // ivar: _domain
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isLinkPreviewEnabled) BOOL linkPreviewEnabled;
@property (retain, nonatomic) _SFFluidProgressView *progressView; // ivar: _progressView
@property (readonly) Class superclass;


-(BOOL)linkPreviewEnabled;
-(CGFloat)defaultHeight;
-(id)initWithMinimumPreviewUI:(BOOL)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)fluidProgressViewDidShowProgress:(id)arg0 ;
-(void)fluidProgressViewWillShowProgress:(id)arg0 ;
-(void)layoutSubviews;
-(void)linkPreviewHeaderContentView:(id)arg0 didEnableLinkPreview:(BOOL)arg1 ;


@end


#endif