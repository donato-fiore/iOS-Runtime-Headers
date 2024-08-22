// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMACTIVITYVIEWCONTROLLER_H
#define PMACTIVITYVIEWCONTROLLER_H

@class UIActivityViewController, NSString, UIBarButtonItem, UIViewController;
@protocol PMAirplayActivityDelegate, UIActivityViewControllerObjectManipulationDelegate, PMActivityItemProviderDelegate, UIActivityViewControllerAirDropDelegate, PMActivityViewControllerDelegate;


#import "PMAirplayActivity.h"

@interface PMActivityViewController : UIActivityViewController <PMAirplayActivityDelegate, UIActivityViewControllerObjectManipulationDelegate, PMActivityItemProviderDelegate, UIActivityViewControllerAirDropDelegate>



@property (retain, nonatomic) PMAirplayActivity *airplayActivity; // ivar: _airplayActivity
@property (nonatomic) NSUInteger backgroundTask; // ivar: _backgroundTask
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PMActivityViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIBarButtonItem *doneButton; // ivar: _doneButton
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIViewController *presenter; // ivar: _presenter
@property (readonly) Class superclass;


-(id)_customizationGroupsForActivityViewController:(id)arg0 ;
-(id)initWithActivityItems:(id)arg0 applicationActivities:(id)arg1 barButtonItem:(id)arg2 parentViewController:(id)arg3 ;
-(void)activityViewControllerDidFinishAirdropTransfer:(id)arg0 ;
-(void)activityViewControllerWillStartAirdropTransfer:(id)arg0 ;
-(void)cancel;
-(void)exportFailed;
-(void)exportWillBegin;
-(void)setCompletionWithItemsHandler:(id)arg0 ;
-(void)setModalPresentationStyle:(NSInteger)arg0 ;
-(void)updateVisibleShareActions;
-(void)viewWillLayoutSubviews;


@end


#endif