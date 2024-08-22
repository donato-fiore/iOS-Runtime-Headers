// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUPLACEHOLDERVIEWCONTROLLER_H
#define SUPLACEHOLDERVIEWCONTROLLER_H



#import "SUViewController.h"
#import "SULoadingView.h"
#import "SUGradientView.h"
#import "SUGradient.h"

@interface SUPlaceholderViewController : SUViewController {
    BOOL _hideLoadingView;
    SULoadingView *_loadingView;
    SUGradientView *_gradientView;
}


@property (copy, nonatomic) SUGradient *backgroundGradient; // ivar: _backgroundGradient
@property (copy, nonatomic) SUGradient *defaultBackgroundGradient; // ivar: _defaultBackgroundGradient
@property (readonly, nonatomic) SULoadingView *loadingView;
@property (nonatomic) BOOL shouldShowLoadingView;


-(id)_copyActiveGradient;
-(id)_newURLBagBackgroundGradient;
-(id)copyArchivableContext;
-(id)copyDefaultScriptProperties;
-(id)init;
-(void)_bagDidLoadNotification:(id)arg0 ;
-(void)_reloadBackgroundGradient;
-(void)_reloadLoadingView;
-(void)dealloc;
-(void)loadView;
-(void)parentViewControllerHierarchyDidChange;
-(void)setScriptProperties:(id)arg0 ;
-(void)setSkLoading:(BOOL)arg0 ;


@end


#endif