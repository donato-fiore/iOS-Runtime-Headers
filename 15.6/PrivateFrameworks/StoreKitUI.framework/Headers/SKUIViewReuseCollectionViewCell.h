// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIVIEWREUSECOLLECTIONVIEWCELL_H
#define SKUIVIEWREUSECOLLECTIONVIEWCELL_H

@class NSMapTable, NSArray;


#import "SKUICollectionViewCell.h"
#import "SKUIViewReusePool.h"

@interface SKUIViewReuseCollectionViewCell : SKUICollectionViewCell {
    NSMapTable *_allViewTextProperties;
    SKUIViewReusePool *_viewPool;
}


@property (readonly, nonatomic) NSArray *allExistingViews; // ivar: _allExistingViews
@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset


-(id)existingViewForIndex:(NSInteger)arg0 ;
-(id)existingViewsForReuseIdentifier:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)textPropertiesForView:(id)arg0 ;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)dealloc;
-(void)enumerateExistingViewsForReuseIdentifier:(id)arg0 usingBlock:(id)arg1 ;
-(void)modifyUsingBlock:(id)arg0 ;
-(void)registerClass:(Class)arg0 forViewWithReuseIdentifier:(id)arg1 ;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif