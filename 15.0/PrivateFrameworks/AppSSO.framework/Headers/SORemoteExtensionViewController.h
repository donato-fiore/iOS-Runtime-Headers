// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SOREMOTEEXTENSIONVIEWCONTROLLER_H
#define SOREMOTEEXTENSIONVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol SOHostExtensionViewProtocol;



@interface SORemoteExtensionViewController : UIRemoteViewController <SOHostExtensionViewProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)exportedInterface;
+(id)serviceViewControllerInterface;


@end


#endif