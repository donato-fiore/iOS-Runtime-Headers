// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIVIEWSERVICEVIEWCONTROLLERDEPUTYXPCINTERFACE_H
#define _UIVIEWSERVICEVIEWCONTROLLERDEPUTYXPCINTERFACE_H

@class NSXPCInterface, NSString;
@protocol _UIViewServiceDeputyXPCInterface;

#import <Foundation/Foundation.h>


@interface _UIViewServiceViewControllerDeputyXPCInterface : NSObject <_UIViewServiceDeputyXPCInterface>

 {
    NSXPCInterface *_exportedInterface;
    NSXPCInterface *_remoteViewControllerInterface;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)interfaceWithExportedInterface:(id)arg0 remoteViewControllerInterface:(id)arg1 ;
-(SEL)connectionSelector;
-(id)connectionInvocation;
-(id)connectionProtocol;
-(id)exportedInterface;
-(id)hostObjectInterface;


@end


#endif