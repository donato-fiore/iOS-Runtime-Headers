// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISEARCHBARTRANSITIONERBASE_H
#define _UISEARCHBARTRANSITIONERBASE_H


#import <Foundation/Foundation.h>

#import "_UISearchBarLayout.h"
#import "UIView.h"
#import "_UISearchBarTransitionContext.h"

@interface _UISearchBarTransitionerBase : NSObject

@property (readonly, nonatomic) _UISearchBarLayout *activeLayout; // ivar: _activeLayout
@property (readonly, weak, nonatomic) UIView *searchBar; // ivar: _searchBar
@property (retain, nonatomic) _UISearchBarTransitionContext *transitionContext; // ivar: _transitionContext


-(id)init;
-(id)initWithNewTransitionContextForSearchBar:(id)arg0 ;
-(id)initWithTransitionContext:(id)arg0 forSearchBar:(id)arg1 ;
-(void)animate;
-(void)cancel;
-(void)complete;
-(void)prepare;


@end


#endif