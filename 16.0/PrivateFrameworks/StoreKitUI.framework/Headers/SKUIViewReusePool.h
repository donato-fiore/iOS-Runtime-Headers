// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIVIEWREUSEPOOL_H
#define SKUIVIEWREUSEPOOL_H

@class UIView, NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface SKUIViewReusePool : NSObject {
    UIView *_parentView;
    NSMutableDictionary *_reuseClasses;
    NSMutableArray *_viewPool;
}




-(Class)viewClassWithReuseIdentifier:(id)arg0 ;
-(id)dequeueReusableViewWithReuseIdentifier:(id)arg0 ;
-(id)initWithParentView:(id)arg0 ;
-(void)hideUnusedViews;
-(void)recycleReusableViews:(id)arg0 ;
-(void)registerClass:(Class)arg0 forViewWithReuseIdentifier:(id)arg1 ;


@end


#endif