// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FLHOSTVIEWCONTROLLER_H
#define FLHOSTVIEWCONTROLLER_H

@class UIRemoteViewController, _UIRemoteViewController, NSString;
@protocol _UIRemoteViewControllerContaining, FLExtensionHostInterface;



@interface FLHostViewController : UIRemoteViewController <_UIRemoteViewControllerContaining, FLExtensionHostInterface>



@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(id)exportedInterface;
-(id)serviceViewControllerInterface;


@end


#endif