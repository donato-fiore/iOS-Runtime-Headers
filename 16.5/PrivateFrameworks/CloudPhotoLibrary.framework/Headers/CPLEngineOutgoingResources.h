// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLENGINEOUTGOINGRESOURCES_H
#define CPLENGINEOUTGOINGRESOURCES_H

@class NSString;
@protocol CPLAbstractObject;


#import "CPLEngineStorage.h"
#import "CPLPlatformObject.h"

@interface CPLEngineOutgoingResources : CPLEngineStorage <CPLAbstractObject>



@property (readonly, nonatomic) NSUInteger countOfOriginalImages;
@property (readonly, nonatomic) NSUInteger countOfOriginalOthers;
@property (readonly, nonatomic) NSUInteger countOfOriginalVideos;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly, nonatomic) NSUInteger sizeOfOriginalResourcesToUpload;
@property (readonly, nonatomic) NSUInteger sizeOfResourcesToUpload;
@property (readonly) Class superclass;


-(BOOL)deleteRecordsForScopeIndex:(NSInteger)arg0 maxCount:(NSInteger)arg1 deletedCount:(*NSInteger)arg2 error:(*id)arg3 ;
-(BOOL)deleteResourcesToUploadWithUploadIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)openWithError:(*id)arg0 ;
-(BOOL)shouldUploadResource:(id)arg0 ;
-(BOOL)storeResourcesToUpload:(id)arg0 withUploadIdentifier:(id)arg1 shouldCheckResources:(BOOL)arg2 error:(*id)arg3 ;
-(NSUInteger)availableResourceSizeForUploadIdentifier:(id)arg0 ;
-(NSUInteger)scopeType;
-(id)resourceTypesToUploadForChange:(id)arg0 ;


@end


#endif