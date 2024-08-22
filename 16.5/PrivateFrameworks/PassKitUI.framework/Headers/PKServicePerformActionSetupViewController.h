// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSERVICEPERFORMACTIONSETUPVIEWCONTROLLER_H
#define PKSERVICEPERFORMACTIONSETUPVIEWCONTROLLER_H

@class UIViewController, NSString;
@protocol PKServicePerformActionSetupViewControllerProtocol, PKPerformActionViewControllerDelegate;



@interface PKServicePerformActionSetupViewController : UIViewController <PKServicePerformActionSetupViewControllerProtocol, PKPerformActionViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(NSUInteger)supportedInterfaceOrientations;
-(void)configureWithPassUniqueIdentifier:(id)arg0 actionType:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)dismiss;
-(void)performActionViewControllerDidCancel:(id)arg0 ;
-(void)performActionViewControllerDidPerformAction:(id)arg0 ;
-(void)setDisplayPropertiesWithScreenSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;


@end


#endif