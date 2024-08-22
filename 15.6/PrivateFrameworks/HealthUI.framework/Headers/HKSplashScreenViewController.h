// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSPLASHSCREENVIEWCONTROLLER_H
#define HKSPLASHSCREENVIEWCONTROLLER_H

@class UIButton, NSString, NSMutableArray;
@protocol UITableViewDelegate, UITableViewDataSource;


#import "HKViewController.h"
#import "HKSplashScreenView.h"

@interface HKSplashScreenViewController : HKViewController <UITableViewDelegate, UITableViewDataSource>



@property (readonly) UIButton *continueButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *splashItems; // ivar: _splashItems
@property (readonly, nonatomic) HKSplashScreenView *splashScreenView;
@property (nonatomic) NSInteger splashVersion; // ivar: _splashVersion
@property (readonly) Class superclass;


+(id)splashScreenForSplashScreenVersion:(NSInteger)arg0 ;
+(void)markSplashScreenAtVersion:(NSInteger)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initForSplashScreenVersion:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)addSplashScreenViewControllerItem:(id)arg0 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif