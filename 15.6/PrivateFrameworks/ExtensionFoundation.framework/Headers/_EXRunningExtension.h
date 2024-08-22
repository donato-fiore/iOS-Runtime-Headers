// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EXRUNNINGEXTENSION_H
#define _EXRUNNINGEXTENSION_H

@class EXExtension, NSString;
@protocol NSXPCListenerDelegate, _EXConnectionHandler;



@interface _EXRunningExtension : EXExtension <NSXPCListenerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL hasSwiftEntryPoint; // ivar: _hasSwiftEntryPoint
@property (readonly) NSUInteger hash;
@property (retain) NSObject<_EXConnectionHandler> *principalObject; // ivar: _principalObject
@property (readonly) Class superclass;


+(*unk)entryPointFunction;
+(id)sharedInstance;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(int)_startWithArguments:(*char *)arg0 count:(int)arg1 ;
-(int)startWithArguments:(*char *)arg0 count:(int)arg1 ;
-(void)checkIn;
-(void)installRunloopObserverToPingLaunchdAfterEvent;
-(void)resume;


@end


#endif