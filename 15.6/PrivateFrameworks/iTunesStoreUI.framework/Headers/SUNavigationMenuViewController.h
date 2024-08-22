// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUNAVIGATIONMENUVIEWCONTROLLER_H
#define SUNAVIGATIONMENUVIEWCONTROLLER_H



#import "SUMenuViewController.h"
#import "SUNavigationMenu.h"

@interface SUNavigationMenuViewController : SUMenuViewController

@property (readonly, nonatomic) SUNavigationMenu *navigationMenu; // ivar: _navigationMenu


-(NSInteger)numberOfMenuItems;
-(id)init;
-(id)initWithNavigationMenu:(id)arg0 ;
-(id)titleOfMenuItemAtIndex:(NSInteger)arg0 ;
-(void)_cancelAction:(id)arg0 ;
-(void)_protocolButtonAction:(id)arg0 ;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif