// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COREDAVDISCOVERYTASKGROUP_H
#define COREDAVDISCOVERYTASKGROUP_H

@class NSString, NSArray, NSMutableArray;
@protocol CoreDAVOptionsTaskDelegate, CoreDAVPropFindTaskDelegate, CoreDAVDiscoveryTaskGroupDelegate, CoreDAVAccountInfoProvider;


#import "CoreDAVTaskGroup.h"

@interface CoreDAVDiscoveryTaskGroup : CoreDAVTaskGroup <CoreDAVOptionsTaskDelegate, CoreDAVPropFindTaskDelegate>

 {
    NSString *_requiredComplianceClass;
    NSArray *_httpPorts;
    NSArray *_httpsPorts;
    NSString *_httpServiceString;
    NSString *_httpsServiceString;
    NSMutableArray *_discoveries;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CoreDAVDiscoveryTaskGroupDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didReceiveAuthenticationError; // ivar: _didReceiveAuthenticationError
@property (retain, nonatomic) NSObject<CoreDAVAccountInfoProvider> *discoveredAccountInfo; // ivar: _discoveredAccountInfo
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *potentialContextPaths; // ivar: _potentialContextPaths
@property (nonatomic) BOOL shouldBailEarly; // ivar: _shouldBailEarly
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *wellKnownPath; // ivar: _wellKnownPath


-(id)allDiscoveryPaths:(id)arg0 ;
-(id)allDiscoveryPorts:(id)arg0 withScheme:(id)arg1 ;
-(id)cleanedStringsFromResponseHeaders:(id)arg0 forHeader:(id)arg1 ;
-(id)extractPrincipalURLFromPropFindTask:(id)arg0 error:(*id)arg1 ;
-(id)initWithAccountInfoProvider:(id)arg0 taskManager:(id)arg1 ;
-(id)initWithAccountInfoProvider:(id)arg0 taskManager:(id)arg1 httpPorts:(id)arg2 httpsPorts:(id)arg3 httpServiceString:(id)arg4 httpsServiceString:(id)arg5 wellKnownPath:(id)arg6 potentialContextPaths:(id)arg7 requiredComplianceClass:(id)arg8 ;
-(id)initWithAccountInfoProvider:(id)arg0 taskManager:(id)arg1 httpPorts:(id)arg2 httpsPorts:(id)arg3 httpServiceString:(id)arg4 httpsServiceString:(id)arg5 wellKnownPaths:(id)arg6 requiredComplianceClass:(id)arg7 ;
-(id)propFindProperties;
-(id)setupDiscoveries:(id)arg0 withSchemes:(id)arg1 ;
-(void)addToDiscoveryArray:(*id)arg0 discovery:(id)arg1 ;
-(void)cancelTaskGroup;
-(void)completeDiscovery:(id)arg0 error:(id)arg1 ;
-(void)completeOptionsTask:(id)arg0 error:(id)arg1 ;
-(void)getDiscoveryStatus:(id)arg0 priorFailed:(*id)arg1 subsequentFailed:(*id)arg2 priorIncomplete:(*id)arg3 subsequentIncomplete:(*id)arg4 priorSuccess:(*id)arg5 subsequentSuccess:(*id)arg6 ;
-(void)noteDefinitiveAuthFailureFromTask:(id)arg0 ;
-(void)optionsTask:(id)arg0 error:(id)arg1 ;
-(void)propFindTaskFinished:(id)arg0 ;
-(void)srvLookupTask:(id)arg0 error:(id)arg1 ;
-(void)startOptionsTask:(id)arg0 ;
-(void)startPropfindTask:(id)arg0 ;
-(void)startSRVLookup:(id)arg0 serviceString:(id)arg1 ;
-(void)startTaskGroup;
-(void)startWellKnownFallbackHeadTask:(id)arg0 withURL:(id)arg1 ;
-(void)startWellKnownLocationTask:(id)arg0 withURL:(id)arg1 ;
-(void)syncAway;
-(void)task:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)taskGroupWillCancelWithError:(id)arg0 ;


@end


#endif