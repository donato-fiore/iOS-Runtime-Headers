// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFPASSWORDREMOTEVIEWCONTROLLER_H
#define SFPASSWORDREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol SFPasswordRemoteViewControllerProtocol, SFPasswordRemoteViewControllerDelegate;



@interface SFPasswordRemoteViewController : UIRemoteViewController <SFPasswordRemoteViewControllerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFPasswordRemoteViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)shouldPropagateAppearanceCustomizations;
+(id)exportedInterface;
+(id)passwordServiceViewControllerName;
+(id)requestViewControllerWithConnectionHandler:(id)arg0 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;
-(void)willDismissServiceViewController;


@end


#endif