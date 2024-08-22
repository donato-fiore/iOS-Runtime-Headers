// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLASSETSDDIAGNOSTICSCLIENT_H
#define PLASSETSDDIAGNOSTICSCLIENT_H



#import "PLAssetsdBaseClient.h"

@interface PLAssetsdDiagnosticsClient : PLAssetsdBaseClient



-(BOOL)dumpCloudPhotosStatusIncludingDaemon:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)dumpPhotoAnalysisStatusWithOutputFilePath:(*id)arg0 error:(*id)arg1 ;
-(BOOL)getPhotosXPCEndpoint:(*id)arg0 error:(*id)arg1 ;
-(BOOL)incompleteRestoreProcesses:(*id)arg0 error:(*id)arg1 ;
-(void)setPhotosXPCEndpoint:(id)arg0 completionHandler:(id)arg1 ;
-(void)setSharedMemoryForDeferredLogging:(id)arg0 ;


@end


#endif