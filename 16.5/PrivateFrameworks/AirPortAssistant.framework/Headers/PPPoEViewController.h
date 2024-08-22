// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPPOEVIEWCONTROLLER_H
#define PPPOEVIEWCONTROLLER_H

@class NSString, UIView, UILabel;
@protocol TableViewManagerDelegate, UINavigationControllerDelegate;


#import "AssistantSubUIViewController.h"
#import "PPPoEConnectionUIViewController.h"

@interface PPPoEViewController : AssistantSubUIViewController <TableViewManagerDelegate, UINavigationControllerDelegate>

 {
    id *previousNavDelegate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *justTextContainerView; // ivar: justTextContainerView
@property (nonatomic) UILabel *justTextLabel; // ivar: justTextLabel
@property (retain) PPPoEConnectionUIViewController *pppoeConnectionUIViewController; // ivar: pppoeConnectionUIViewController
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *tableHeaderContainerView; // ivar: tableHeaderContainerView


-(BOOL)shouldChangeTextField:(id)arg0 atIndexPath:(id)arg1 forTextIndex:(NSUInteger)arg2 toString:(id)arg3 ;
-(id)valueForItemOfType:(id)arg0 atTypeIndex:(NSUInteger)arg1 inCellWithTag:(NSInteger)arg2 ;
-(void)dealloc;
-(void)loadView;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setupInitialTableHeaderConfiguration;
-(void)touchInCellAtIndexPath:(id)arg0 ;


@end


#endif