// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIREVIEWCOLLECTIONVIEWCELL_H
#define SKUIREVIEWCOLLECTIONVIEWCELL_H

@class NSString;
@protocol SKUIViewElementView;


#import "SKUIViewReuseCollectionViewCell.h"
#import "SKUITextBoxView.h"
#import "SKUIResponseView.h"

@interface SKUIReviewCollectionViewCell : SKUIViewReuseCollectionViewCell <SKUIViewElementView>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *descriptionTapAction; // ivar: _descriptionTapAction
@property (retain, nonatomic) SKUITextBoxView *descriptionView; // ivar: _descriptionView
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *responseDescriptionTapAction; // ivar: _responseDescriptionTapAction
@property (retain, nonatomic) SKUIResponseView *responseView; // ivar: _responseView
@property (readonly) Class superclass;


+(BOOL)prefetchResourcesForViewElement:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(id)_attributedStringForDateLabel:(id)arg0 context:(id)arg1 ;
+(id)_attributedStringForTitleLabel:(id)arg0 context:(id)arg1 ;
+(struct CGSize )preferredSizeForViewElement:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 viewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(BOOL)updateWithItemState:(id)arg0 context:(id)arg1 animated:(BOOL)arg2 ;
-(id)viewForElementIdentifier:(id)arg0 ;
-(void)_resetTapGestures;
-(void)contentViewTapped:(id)arg0 ;
-(void)layoutSubviews;
-(void)reloadWithViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif