// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIRESPONSEVIEW_H
#define SKUIRESPONSEVIEW_H

@class NSMapTable, NSString, UIImageView;
@protocol SKUIViewElementView;


#import "SKUIViewReuseView.h"
#import "SKUITextBoxView.h"
#import "SKUIAttributedStringView.h"

@interface SKUIResponseView : SKUIViewReuseView <SKUIViewElementView>



@property (retain, nonatomic) NSMapTable *allViewTextProperties; // ivar: _allViewTextProperties
@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SKUITextBoxView *descriptionView; // ivar: _descriptionView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImageView *replyImageView; // ivar: _replyImageView
@property (retain, nonatomic) SKUIAttributedStringView *subtitleView; // ivar: _subtitleView
@property (readonly) Class superclass;


+(BOOL)prefetchResourcesForViewElement:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(id)_attributedStringForSubtitleLabel:(id)arg0 context:(id)arg1 ;
+(struct CGSize )preferredSizeForViewElement:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 viewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(BOOL)updateWithItemState:(id)arg0 context:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForElementIdentifier:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)reloadWithViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;


@end


#endif