// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHEXTERNALASSETRESOURCE_H
#define PHEXTERNALASSETRESOURCE_H

@class NSData, NSURL, NSString;
@protocol PHCPLAssetResource;

#import <Foundation/Foundation.h>

#import "PHAssetResourceCreationOptions.h"

@interface PHExternalAssetResource : NSObject <PHCPLAssetResource>

 {
    NSInteger _sandboxExtensionHandle;
}


@property (readonly, nonatomic) NSUInteger cplResourceType; // ivar: _cplResourceType
@property (copy, nonatomic) PHAssetResourceCreationOptions *creationOptions; // ivar: _creationOptions
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (nonatomic, setter=_setDuplicateAllowsReadAccess:) BOOL duplicateAllowsReadAccess; // ivar: _duplicateAllowsReadAccess
@property (copy, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly, nonatomic) BOOL isLibraryAssetResource; // ivar: _isLibraryAssetResource
@property (readonly, nonatomic) NSString *originalFilename;
@property (nonatomic) NSInteger pixelHeight; // ivar: _pixelHeight
@property (nonatomic) NSInteger pixelWidth; // ivar: _pixelWidth
@property (readonly, nonatomic) NSInteger type; // ivar: _resourceType
@property (readonly, nonatomic) NSString *uniformTypeIdentifier;


+(NSUInteger)probableCPLResourceTypeFromAssetResourceType:(NSInteger)arg0 ;
+(id)assetResourceForDuplicatingAssetResource:(id)arg0 asData:(BOOL)arg1 error:(*id)arg2 ;
+(id)assetResourceForDuplicatingAssetResource:(id)arg0 newResourceType:(NSInteger)arg1 asData:(BOOL)arg2 error:(*id)arg3 ;
-(id)_issueSandboxExtension;
-(id)init;
-(id)initWithPropertyListRepresentation:(id)arg0 ;
-(id)initWithResourceType:(NSInteger)arg0 ;
-(id)propertyListRepresentation;
-(void)_consumeSandboxExtension:(id)arg0 ;
-(void)_releaseSandboxExtension;
-(void)dealloc;


@end


#endif