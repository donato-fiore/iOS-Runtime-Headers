// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDBACKGROUNDOBSERVATIONSERVEREXTENSION_H
#define HDBACKGROUNDOBSERVATIONSERVEREXTENSION_H

@class NSExtension, NSUUID, _HKBackgroundObservationExtensionHostContext, _HKBackgroundObservationExtensionRemoteContext, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HDBackgroundObservationServerExtension : NSObject {
    NSExtension *_extension;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSUUID *_sessionUUID;
    _HKBackgroundObservationExtensionHostContext *_extensionHostContext;
    _HKBackgroundObservationExtensionRemoteContext *_extensionContext;
}


@property (readonly, copy, nonatomic) NSString *appIdentifier; // ivar: _appIdentifier
@property (readonly, copy, nonatomic) NSString *extensionIdentifier; // ivar: _extensionIdentifier
@property (nonatomic) BOOL unitTest_notifiedExtensionDueToTimeout; // ivar: _unitTest_notifiedExtensionDueToTimeout


-(id)_initWithExtension:(id)arg0 ;
-(id)description;
-(id)init;
-(id)unitTest_extensionContext;
-(id)unitTest_extensionHostContext;
-(id)unitTest_queue;
-(id)unitTest_sessionUUID;
-(void)connectWithCompletionHandler:(id)arg0 ;
-(void)disconnect;
-(void)notifyExtensionOfUpcomingTimeout;
-(void)notifyExtensionOfUpdateForSampleType:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif