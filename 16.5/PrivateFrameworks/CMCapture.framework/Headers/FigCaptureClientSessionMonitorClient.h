// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGCAPTURECLIENTSESSIONMONITORCLIENT_H
#define FIGCAPTURECLIENTSESSIONMONITORCLIENT_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface FigCaptureClientSessionMonitorClient : NSObject

@property (readonly, nonatomic) id *applicationAndLayoutStateHandler; // ivar: _applicationAndLayoutStateHandler
@property (readonly, nonatomic) NSString *applicationID; // ivar: _applicationID
@property (retain, nonatomic) NSString *applicationIDToInheritAppStateFrom; // ivar: _applicationIDToInheritAppStateFrom
@property (readonly, nonatomic) ? auditToken; // ivar: _auditToken
@property (readonly, nonatomic) NSArray *avconferenceClientApplicationIDs; // ivar: _avconferenceClientApplicationIDs
@property (readonly, nonatomic, getter=hasBackgroundCameraAccess) BOOL backgroundCameraAccess; // ivar: _hasBackgroundCameraAccess
@property (readonly, nonatomic) int clientType; // ivar: _clientType
@property (readonly, nonatomic, getter=isExtension) BOOL extension; // ivar: _isExtension
@property (readonly, nonatomic) NSString *extensionRootHostApplicationID; // ivar: _extensionRootHostApplicationID
@property (readonly, nonatomic) int extensionRootHostPID; // ivar: _extensionRootHostPID
@property (readonly, nonatomic, getter=isForThirdPartyTorch) BOOL forThirdPartyTorch; // ivar: _isForThirdPartyTorch
@property (readonly, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (readonly, nonatomic) int pid; // ivar: _pid
@property (nonatomic) int pidToInheritAppStateFrom; // ivar: _pidToInheritAppStateFrom
@property (readonly, nonatomic, getter=isSwiftPlaygroundsDevelopmentApp) BOOL swiftPlaygroundsDevelopmentApp; // ivar: _isSwiftPlaygroundsDevelopmentApp


-(id)debugDescription;
-(id)description;
// -(id)initWithAuditToken:(struct ? )arg0 forThirdPartyTorch:(BOOL)arg1 applicationAndLayoutStateHandler:(id)arg2 interruptionHandler:(unk)arg3  ;
-(void)dealloc;
-(void)invalidate;


@end


#endif