// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKBACKGROUNDOBSERVATIONEXTENSIONREMOTECONTEXT_H
#define _HKBACKGROUNDOBSERVATIONEXTENSIONREMOTECONTEXT_H

@class HKBackgroundObservationExtensionContext, NSString;
@protocol _HKBackgroundObservationExtensionRemoteXPCInterface;


#import "HKBackgroundObservationExtension.h"

@interface _HKBackgroundObservationExtensionRemoteContext : HKBackgroundObservationExtensionContext <_HKBackgroundObservationExtensionRemoteXPCInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HKBackgroundObservationExtension *extensionInstance; // ivar: _extensionInstance
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithInputItems:(id)arg0 listenerEndpoint:(id)arg1 contextUUID:(id)arg2 ;
-(void)backgroundObservationExtensionTimeWillExpire;
-(void)didReceiveUpdateForSampleType:(id)arg0 completionHandler:(id)arg1 ;
-(void)performCleanup;


@end


#endif