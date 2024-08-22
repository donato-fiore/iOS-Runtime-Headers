// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUARTICLEEXCERPTVIEW_H
#define NUARTICLEEXCERPTVIEW_H

@class UIView, UIScrollView, NSString, WKWebView, UILabel, UIImageView, TFMultiDelegate;
@protocol UIScrollViewDelegate;


#import "NUArticleExcerptReadMoreButton.h"
#import "NUArticleExcerptTraits.h"

@interface NUArticleExcerptView : UIView <UIScrollViewDelegate>



@property (readonly, nonatomic) UIScrollView *contentScrollView; // ivar: _contentScrollView
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIScrollViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) WKWebView *excerptWebView; // ivar: _excerptWebView
@property (readonly, nonatomic) UIView *hairlineSeparatorView; // ivar: _hairlineSeparatorView
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UILabel *headlineDateLabel; // ivar: _headlineDateLabel
@property (readonly, nonatomic) UIImageView *headlineImageView; // ivar: _headlineImageView
@property (readonly, nonatomic) UILabel *headlineTitleLabel; // ivar: _headlineTitleLabel
@property (readonly, nonatomic) TFMultiDelegate *multiDelegate; // ivar: _multiDelegate
@property (readonly, nonatomic) NUArticleExcerptReadMoreButton *readMoreButton; // ivar: _readMoreButton
@property (readonly) Class superclass;
@property (copy, nonatomic) NUArticleExcerptTraits *traits; // ivar: _traits


+(id)webViewConfiguration;
-(id)initWithTraits:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)updateImageAspectRatio;
-(void)updateWithHeadlineImage:(id)arg0 ;


@end


#endif