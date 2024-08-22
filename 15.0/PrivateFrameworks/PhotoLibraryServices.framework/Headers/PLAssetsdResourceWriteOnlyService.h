// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLASSETSDRESOURCEWRITEONLYSERVICE_H
#define PLASSETSDRESOURCEWRITEONLYSERVICE_H

@class NSString;
@protocol PLAssetsdResourceWriteOnlyServiceProtocol;


#import "PLAbstractLibraryServicesManagerService.h"
#import "PLAssetsdConnectionAuthorization.h"

@interface PLAssetsdResourceWriteOnlyService : PLAbstractLibraryServicesManagerService <PLAssetsdResourceWriteOnlyServiceProtocol>



@property (readonly, nonatomic) PLAssetsdConnectionAuthorization *connectionAuthorization; // ivar: _connectionAuthorization
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithLibraryServicesManager:(id)arg0 connectionAuthorization:(id)arg1 ;
-(void)saveAssetWithDataAndPorts:(id)arg0 clientConnection:(id)arg1 imageSurface:(id)arg2 previewImageSurface:(id)arg3 reply:(id)arg4 ;
-(void)saveAssetWithDataAndPorts:(id)arg0 imageSurface:(id)arg1 previewImageSurface:(id)arg2 reply:(id)arg3 ;


@end


#endif