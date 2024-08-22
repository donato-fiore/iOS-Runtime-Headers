// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIVIEWCONTROLLERCONTROLMESSAGEDEPUTYXPCINTERFACE_H
#define _UIVIEWCONTROLLERCONTROLMESSAGEDEPUTYXPCINTERFACE_H

@class NSString;
@protocol _UIViewServiceDeputyXPCInterface;

#import <Foundation/Foundation.h>


@interface _UIViewControllerControlMessageDeputyXPCInterface : NSObject <_UIViewServiceDeputyXPCInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(SEL)connectionSelector;
-(id)connectionInvocation;
-(id)connectionProtocol;
-(id)exportedInterface;
-(id)hostObjectInterface;


@end


#endif