// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUNAVIGATIONCONTROLLER_H
#define SUNAVIGATIONCONTROLLER_H

@class UINavigationController, NSString;
@protocol SUScriptNativeObject;


#import "SUClientInterface.h"
#import "SUSection.h"

@interface SUNavigationController : UINavigationController <SUScriptNativeObject>

 {
    BOOL _canBeWeakScriptReference;
    NSInteger _storeBarStyle;
}


@property (retain, nonatomic) SUClientInterface *clientInterface; // ivar: _clientInterface
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SUSection *section; // ivar: _section
@property (nonatomic, getter=isSkLoading) BOOL skLoading; // ivar: _skLoading
@property (readonly) Class superclass;


-(BOOL)clearsWeakScriptReferences;
-(BOOL)window:(id)arg0 shouldAutorotateToInterfaceOrientation:(NSInteger)arg1 ;
-(NSInteger)ITunesStoreUIBarStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_sectionForViewController:(id)arg0 ;
-(id)copyArchivableContext;
-(id)copyScriptViewController;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithRootViewController:(id)arg0 ;
-(id)initWithSection:(id)arg0 ;
-(id)initWithSection:(id)arg0 rootViewController:(id)arg1 ;
-(id)moreListImage;
-(id)moreListSelectedImage;
-(void)_loadingDidChangeNotification:(id)arg0 ;
-(void)_setStoreBarStyle:(NSInteger)arg0 clientInterface:(id)arg1 ;
-(void)addChildViewController:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)removeChildViewController:(id)arg0 ;
-(void)restoreArchivableContext:(id)arg0 ;
-(void)setParentViewController:(id)arg0 ;
-(void)setToolbarHidden:(BOOL)arg0 ;
-(void)setToolbarHidden:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setViewControllers:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif