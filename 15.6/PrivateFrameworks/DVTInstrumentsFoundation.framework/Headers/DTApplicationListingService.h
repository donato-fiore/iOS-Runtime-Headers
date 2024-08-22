// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTAPPLICATIONLISTINGSERVICE_H
#define DTAPPLICATIONLISTINGSERVICE_H

@class DTXService, NSString;
@protocol DTApplicationWorkspaceClient, DTApplicationListingServiceRequests;



@interface DTApplicationListingService : DTXService <DTApplicationWorkspaceClient, DTApplicationListingServiceRequests>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)registerCapabilities:(id)arg0 ;
-(id)installedApplicationsMatching:(id)arg0 registerUpdateToken:(id)arg1 ;
-(void)_sendNotification:(id)arg0 install:(BOOL)arg1 ;
-(void)applicationInstalled:(id)arg0 ;
-(void)applicationUninstalled:(id)arg0 ;
-(void)unregisterUpdateToken:(id)arg0 ;


@end


#endif