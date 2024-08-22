// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIOBJECTINSPECTORVIEWCONTROLLER_H
#define SKUIOBJECTINSPECTORVIEWCONTROLLER_H

@class UIViewController, UIVisualEffectView, UIView, NSString, UINavigationBar, NSMutableArray, UITableView;
@protocol UITableViewDataSource, UITableViewDelegate, UIViewControllerTransitioningDelegate, SKUIObjectInspector, SKUIInspectableObject;


#import "_SKUIInspectablePropertySection.h"

@interface SKUIObjectInspectorViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIViewControllerTransitioningDelegate, SKUIObjectInspector>



@property (retain, nonatomic) UIVisualEffectView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (retain, nonatomic) _SKUIInspectablePropertySection *currentSection; // ivar: _currentSection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *friendlyName;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *information;
@property (retain, nonatomic) NSObject<SKUIInspectableObject> *inspectableObject; // ivar: _inspectableObject
@property (retain, nonatomic) UINavigationBar *navigationBar; // ivar: _navigationBar
@property (retain, nonatomic) NSMutableArray *sections; // ivar: _sections
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


+(void)showInspectableObject:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithInspectableObject:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(struct CGRect )calculateContentViewFrameWithParentBounds:(struct CGRect )arg0 withTraitCollection:(id)arg1 ;
-(void)beginSectionWithFriendlyName:(id)arg0 ;
-(void)dismiss;
-(void)done:(id)arg0 ;
-(void)endSection;
-(void)exposePropertyWithFriendlyName:(id)arg0 value:(id)arg1 ;
-(void)handleBackgroundTap:(id)arg0 ;
-(void)populate;
-(void)setupConstraints;
-(void)showFromViewController:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif