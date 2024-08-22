// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIVIEWMODIFICATION_H
#define SKUIVIEWMODIFICATION_H

@class NSMapTable, NSArray;

#import <Foundation/Foundation.h>

#import "SKUIViewReusePool.h"

@interface SKUIViewModification : NSObject {
    SKUIViewReusePool *_viewPool;
}


@property (readonly, copy, nonatomic) NSMapTable *allViewTextProperties; // ivar: _allViewTextProperties
@property (readonly, nonatomic) NSArray *views; // ivar: _views


-(id)_addImageViewWithReuseIdentifier:(id)arg0 viewElement:(id)arg1 context:(id)arg2 ;
-(id)_attributedStringViewForLayout:(id)arg0 ;
-(id)_itemStateForButton:(id)arg0 ;
-(id)addBadgeViewWithElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(id)addBarRatingWithElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(id)addButtonWithElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(id)addDividerWithElement:(id)arg0 context:(id)arg1 ;
-(id)addHeaderViewWithElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(id)addHorizontalListWithElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(id)addHorizontalLockupWithElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(id)addImageDeckViewWithElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(id)addImageGridViewWithElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(id)addImageViewWithElement:(id)arg0 context:(id)arg1 ;
-(id)addImageViewWithVideoElement:(id)arg0 context:(id)arg1 ;
-(id)addLabelViewWithElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(id)addLabelViewWithOrdinalElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(id)addMenuButtonWithTitleItem:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(id)addOfferViewWithViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(id)addResponseViewWithViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(id)addReusableViewWithReuseIdentifier:(id)arg0 ;
-(id)addReviewListTitleViewWithViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(id)addStackItemViewWithElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(id)addStackListViewWithElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(id)addStarRatingControlViewWithViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(id)addStarRatingViewWithViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(id)addTabularLockupWithElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(id)addTextViewWithElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(id)addTomatoRatingViewWithViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(id)initWithViewReusePool:(id)arg0 ;
-(void)_styleItemOfferButton:(id)arg0 forElement:(id)arg1 context:(id)arg2 ;
-(void)addView:(id)arg0 ;
-(void)setTextProperties:(id)arg0 forView:(id)arg1 ;


@end


#endif