// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNMUTABLEPERSONSMODEL_H
#define VNMUTABLEPERSONSMODEL_H

@class NSString;
@protocol VNPersonsModelDataDelegate;


#import "VNPersonsModel.h"
#import "VNPersonsModelData.h"
#import "VNPersonsModelFaceModel.h"

@interface VNMutablePersonsModel : VNPersonsModel <VNPersonsModelDataDelegate>

 {
    VNPersonsModelData *_modelData;
    VNPersonsModelFaceModel *_faceModel_DO_NOT_ACCESS_DIRECTLY;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_version1ModelWithObjects:(id)arg0 error:(*id)arg1 ;
+(id)configurationFromLoadedObjects:(id)arg0 error:(*id)arg1 ;
+(id)newModelFromVersion:(NSUInteger)arg0 objects:(id)arg1 error:(*id)arg2 ;
+(id)supportedWriteVersions;
-(BOOL)_getModelWritingImplementation:(**unk)arg0 selector:(*SEL)arg1 forVersion:(NSUInteger)arg2 readOnly:(BOOL)arg3 ;
-(BOOL)_getModelWritingImplementation:(**unk)arg0 selector:(*SEL)arg1 version:(*NSUInteger)arg2 forOptions:(id)arg3 ;
-(BOOL)_writeReadOnlyVersion:(NSUInteger)arg0 toOutputStream:(id)arg1 options:(id)arg2 md5Context:(struct CC_MD5state_st *)arg3 error:(*id)arg4 ;
-(BOOL)_writeToUnopenedStream:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(BOOL)_writeVersion1ConfigurationToOutputStream:(id)arg0 md5Context:(struct CC_MD5state_st *)arg1 error:(*id)arg2 ;
-(BOOL)_writeVersion1InformationToOutputStream:(id)arg0 md5Context:(struct CC_MD5state_st *)arg1 error:(*id)arg2 ;
-(BOOL)addFaceObservations:(id)arg0 toPersonWithUniqueIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)removeAllFaceObservationsFromPersonWithUniqueIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeFaceObservations:(id)arg0 fromPersonWithUniqueIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)removePersonWithUniqueIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeReadOnlyVersion1ToOutputStream:(id)arg0 options:(id)arg1 md5Context:(struct CC_MD5state_st *)arg2 error:(*id)arg3 ;
-(BOOL)writeToStream:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(BOOL)writeToURL:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(BOOL)writeVersion1ToOutputStream:(id)arg0 options:(id)arg1 md5Context:(struct CC_MD5state_st *)arg2 error:(*id)arg3 ;
-(id)_lastModificationDate;
-(id)dataWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)upToDateFaceModelWithCanceller:(id)arg0 error:(*id)arg1 ;
-(void)_modelWasModified;
-(void)personsModelDataWasModified:(id)arg0 ;


@end


#endif