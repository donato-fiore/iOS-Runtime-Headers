// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPSENTITYVIEWCONTROLLER_H
#define CPSENTITYVIEWCONTROLLER_H

@class NSMapTable, NSString, CPEntity;
@protocol CPSEntityActionDelegate, CPEntityUpdateProviding;


#import "CPSBaseTemplateViewController.h"
#import "CPSBaseEntityContentViewController.h"
#import "CPSEntityResourceProvider.h"

@interface CPSEntityViewController : CPSBaseTemplateViewController <CPSEntityActionDelegate, CPEntityUpdateProviding>



@property (retain, nonatomic) NSMapTable *buttonMap; // ivar: _buttonMap
@property (readonly, nonatomic) CPSBaseEntityContentViewController *contentViewController; // ivar: _contentViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CPEntity *entity; // ivar: _entity
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CPSEntityResourceProvider *resourceProvider; // ivar: _resourceProvider
@property (readonly) Class superclass;


-(BOOL)entityContentViewController:(id)arg0 didPressButton:(id)arg1 forEntity:(id)arg2 ;
-(BOOL)entityContentViewController:(id)arg0 didPressButton:(id)arg1 forPOI:(id)arg2 ;
-(BOOL)entityContentViewController:(id)arg0 didSelectPointOfInterestWithIdentifier:(id)arg1 ;
-(BOOL)entityContentViewController:(id)arg0 regionDidChange:(struct ? )arg1 ;
-(id)initWithEntityTemplate:(id)arg0 templateDelegate:(id)arg1 templateEnvironment:(id)arg2 ;
-(void)_viewDidLoad;
-(void)setupViewControllers;
-(void)trailingBarButtonPressed:(id)arg0 ;
-(void)updateEntityTemplate:(id)arg0 withProxyDelegate:(id)arg1 ;


@end


#endif