// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNEXTENSIONMEDIATOR_H
#define LNEXTENSIONMEDIATOR_H

@class NSString, _EXExtensionProcess, NSXPCConnection;
@protocol LNDaemonExtensionInterface;

#import <Foundation/Foundation.h>


@interface LNExtensionMediator : NSObject <LNDaemonExtensionInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _EXExtensionProcess *extensionProcess; // ivar: _extensionProcess
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(BOOL)invalidate;
-(id)init;
-(void)dealloc;
-(void)getConnectionHostInterfaceForBundleIdentifier:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif