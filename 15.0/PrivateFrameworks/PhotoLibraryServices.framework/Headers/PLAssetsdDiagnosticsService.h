// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLASSETSDDIAGNOSTICSSERVICE_H
#define PLASSETSDDIAGNOSTICSSERVICE_H

@class NSString;
@protocol PLAssetsdDiagnosticsServiceProtocol;


#import "PLAbstractLibraryServicesManagerService.h"

@interface PLAssetsdDiagnosticsService : PLAbstractLibraryServicesManagerService <PLAssetsdDiagnosticsServiceProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)dumpPhotoAnalysisStatusWithReply:(id)arg0 ;
-(void)dumpStatusIncludingDaemon:(BOOL)arg0 reply:(id)arg1 ;
-(void)getPhotosXPCEndpointWithReply:(id)arg0 ;
-(void)incompleteRestoreProcessesWithReply:(id)arg0 ;
-(void)initializeSharedMemoryForDeferredLogs:(id)arg0 ;
-(void)setPhotosXPCEndpoint:(id)arg0 withReply:(id)arg1 ;


@end


#endif