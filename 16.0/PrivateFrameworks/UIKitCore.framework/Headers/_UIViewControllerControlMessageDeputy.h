// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIVIEWCONTROLLERCONTROLMESSAGEDEPUTY_H
#define _UIVIEWCONTROLLERCONTROLMESSAGEDEPUTY_H

@class UITargetedProxy, NSString;
@protocol _UIViewServiceDeputy, _UIViewServiceUIBehaviorInterface;



@interface _UIViewControllerControlMessageDeputy : UITargetedProxy <_UIViewServiceDeputy, _UIViewServiceUIBehaviorInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)XPCInterface;
+(id)proxyWithTarget:(id)arg0 ;
-(id)invalidate;
-(void)__prepareForDisconnectionWithCompletionHandler:(id)arg0 ;


@end


#endif