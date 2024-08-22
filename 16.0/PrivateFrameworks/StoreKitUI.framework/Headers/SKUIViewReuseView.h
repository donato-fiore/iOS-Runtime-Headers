// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIVIEWREUSEVIEW_H
#define SKUIVIEWREUSEVIEW_H

@class UIView, NSArray;


#import "SKUIViewReusePool.h"

@interface SKUIViewReuseView : UIView {
    SKUIViewReusePool *_viewReusePool;
}


@property (readonly, nonatomic) NSArray *allExistingViews; // ivar: _allExistingViews


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)enumerateExistingViewsForReuseIdentifier:(id)arg0 usingBlock:(id)arg1 ;
-(void)modifyUsingBlock:(id)arg0 ;
-(void)registerClass:(Class)arg0 forViewWithReuseIdentifier:(id)arg1 ;
-(void)setBackgroundColor:(id)arg0 ;


@end


#endif