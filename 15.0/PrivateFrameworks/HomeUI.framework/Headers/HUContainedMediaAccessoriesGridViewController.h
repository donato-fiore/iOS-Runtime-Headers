// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUCONTAINEDMEDIAACCESSORIESGRIDVIEWCONTROLLER_H
#define HUCONTAINEDMEDIAACCESSORIESGRIDVIEWCONTROLLER_H

@class NSString, HFMediaAccessoryItem;
@protocol HUPresentationDelegate, HUServiceGridItemManagerDelegate, HUDetailsPresentationDelegateHost, HUContainedMediaAccessoriesGridViewControllerDelegate;


#import "HUServiceGridViewController.h"

@interface HUContainedMediaAccessoriesGridViewController : HUServiceGridViewController <HUPresentationDelegate, HUServiceGridItemManagerDelegate, HUDetailsPresentationDelegateHost>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<HUContainedMediaAccessoriesGridViewControllerDelegate> *mediaAccessoryGridDelegate; // ivar: _mediaAccessoryGridDelegate
@property (readonly, copy, nonatomic) HFMediaAccessoryItem *mediaAccessoryItem; // ivar: _mediaAccessoryItem
@property (weak, nonatomic) NSObject<HUPresentationDelegate> *presentationDelegate; // ivar: _presentationDelegate
@property (nonatomic, getter=isPresentedModally) BOOL presentedModally; // ivar: _presentedModally
@property (nonatomic) BOOL requiresPresentingViewControllerDismissal; // ivar: _requiresPresentingViewControllerDismissal
@property (readonly) Class superclass;


-(BOOL)hasDetailsActionForPresentationCoordinator:(id)arg0 item:(id)arg1 ;
-(id)detailsViewControllerForPresentationCoordinator:(id)arg0 item:(id)arg1 ;
-(id)finishPresentation:(id)arg0 animated:(BOOL)arg1 ;
-(id)initWithAccessoryContainerItem:(id)arg0 ;
-(id)initWithMediaAccessoryContainerItem:(id)arg0 isPresentedModally:(BOOL)arg1 valueSource:(id)arg2 ;
-(id)layoutOptionsForSection:(NSInteger)arg0 ;
-(void)_done:(id)arg0 ;
-(void)_edit:(id)arg0 ;
-(void)_updateRightBarButtons;
-(void)itemManagerDidUpdate:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif