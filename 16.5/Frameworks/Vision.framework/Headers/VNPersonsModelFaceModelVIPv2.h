// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNPERSONSMODELFACEMODELVIPV2_H
#define VNPERSONSMODELFACEMODELVIPV2_H

@class NSMapTable, NSDictionary;


#import "VNPersonsModelFaceModel.h"

@interface VNPersonsModelFaceModelVIPv2 : VNPersonsModelFaceModel {
    NSMapTable *_serialNumberToPersonUniqueIdentifierMapTable;
    NSDictionary *_cachedPersonUniqueIdentifierToFaceprintCountMapping;
    ? _faceIDModel;
    NSUInteger _faceprintRequestRevision;
    int _maximumElementsPerID;
}




+(?)_concatenateFaceprintImageDescriptorBuffer:(?)arg0 withFaceprints:(?)arg1 forIdentityWithSerialNumberfaceprintLabels;
+(BOOL)getStoredRepresentationTag:(*unsigned int)arg0 forModelVersion:(NSUInteger)arg1 error:(*id)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)modelBuiltFromConfiguration:(id)arg0 dataProvider:(id)arg1 canceller:(id)arg2 error:(*id)arg3 ;
-(BOOL)_getSerialNumber:(*int)arg0 forPersonUniqueIdentifier:(id)arg1 error:(*id)arg2 ;
-(NSUInteger)faceCountForPersonWithUniqueIdentifier:(id)arg0 ;
-(NSUInteger)faceprintRequestRevision;
-(NSUInteger)personCount;
-(id)_personPredictionsForFace:(id)arg0 withDescriptor:(*void)arg1 limit:(NSUInteger)arg2 faceIDCanceller:(struct CVMLCanceller *)arg3 error:(*id)arg4 ;
-(id)faceCountsForAllPersons;
-(id)faceCountsForPersonsWithUniqueIdentifiers:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFaceIDModel:(struct shared_ptr<vision::mod::FaceIDModel> )arg0 faceprintRequestRevision:(NSUInteger)arg1 maximumElementsPerID:(NSUInteger)arg2 personUniqueIdentifierToSerialNumberMapping:(id)arg3 ;
-(id)personPredictionsForFace:(id)arg0 withDescriptor:(*void)arg1 limit:(NSUInteger)arg2 canceller:(id)arg3 error:(*id)arg4 ;
-(id)personUniqueIdentifiers;
-(id)trainingFaceprintsForPersonWithUniqueIdentifier:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif