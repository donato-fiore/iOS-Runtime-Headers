// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUITABULARLOCKUPVIEW_H
#define SKUITABULARLOCKUPVIEW_H

@class NSMapTable, NSString;
@protocol SKUIViewElementView;


#import "SKUIViewReuseView.h"
#import "SKUITabularLockupLayout.h"

@interface SKUITabularLockupView : SKUIViewReuseView <SKUIViewElementView>

 {
    SKUITabularLockupLayout *_layout;
    NSMapTable *_viewElementViews;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)prefetchResourcesForViewElement:(id)arg0 reason:(NSInteger)arg1 context:(id)arg2 ;
+(id)_attributedStringForLabel:(id)arg0 context:(id)arg1 ;
+(struct CGSize )preferredSizeForViewElement:(id)arg0 context:(id)arg1 ;
+(struct CGSize )sizeThatFitsWidth:(CGFloat)arg0 viewElement:(id)arg1 context:(id)arg2 ;
+(void)_requestLayoutForViewElements:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(BOOL)setImage:(id)arg0 forArtworkRequest:(id)arg1 context:(id)arg2 ;
-(BOOL)updateWithItemState:(id)arg0 context:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForElementIdentifier:(id)arg0 ;
-(struct CGSize )_sizeViewsForColumn:(id)arg0 toFitWidth:(CGFloat)arg1 ;
-(void)_layoutSubviewsForColumn:(id)arg0 ;
-(void)layoutSubviews;
-(void)reloadWithViewElement:(id)arg0 width:(CGFloat)arg1 context:(id)arg2 ;
-(void)setContentInset:(struct UIEdgeInsets )arg0 ;


@end


#endif