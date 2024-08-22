// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STPINLISTVIEWCONTROLLER_H
#define STPINLISTVIEWCONTROLLER_H

@class NSString;
@protocol STRestrictionsPINControllerDelegate, STRootViewModelCoordinator;


#import "STListViewController.h"

@interface STPINListViewController : STListViewController <STRestrictionsPINControllerDelegate>



@property (retain, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator; // ivar: _coordinator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) id *showingPinTarget; // ivar: _showingPinTarget
@property (readonly) Class superclass;


-(BOOL)shouldDeferPushForSpecifierID:(id)arg0 ;
-(BOOL)shouldShowPINSheetForSpecifier:(id)arg0 ;
-(BOOL)validatePIN:(id)arg0 forPINController:(id)arg1 ;
-(id)init;
-(id)initWithRootViewModelCoordinator:(id)arg0 ;
-(void)devicePINController:(id)arg0 didAcceptChangedPIN:(id)arg1 ;
-(void)devicePINController:(id)arg0 didAcceptSetPIN:(id)arg1 ;
-(void)devicePINControllerDidDismissPINPane:(id)arg0 ;
-(void)didAcceptEnteredPIN:(id)arg0 ;
-(void)didAcceptRemovePIN;
-(void)didCancelEnteringPIN;
-(void)setUpPasscodeAndLineWrapBehaviorForSpecifier:(id)arg0 ;
-(void)showPINSheet:(id)arg0 ;
-(void)showPINSheet:(id)arg0 completion:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif