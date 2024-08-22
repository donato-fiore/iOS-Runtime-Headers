// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFADDTOHOMESCREENREMOTEVIEWCONTROLLER_H
#define SFADDTOHOMESCREENREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol SFAddToHomeScreenRemoteProtocol, SFAddToHomeScreenRemoteViewControllerDelegate;



@interface SFAddToHomeScreenRemoteViewController : UIRemoteViewController <SFAddToHomeScreenRemoteProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFAddToHomeScreenRemoteViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)shouldPropagateAppearanceCustomizations;
+(id)exportedInterface;
+(id)requestViewControllerWithConnectionHandler:(id)arg0 ;
+(id)serviceViewControllerInterface;
-(void)serviceViewControllerDidFinishWithResult:(BOOL)arg0 ;


@end


#endif