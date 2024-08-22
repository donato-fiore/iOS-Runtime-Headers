// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNPERSONSMODELFACEMODELVIPV3_H
#define VNPERSONSMODELFACEMODELVIPV3_H

@class NSMapTable;


#import "VNPersonsModelFaceModel.h"

@interface VNPersonsModelFaceModelVIPv3 : VNPersonsModelFaceModel {
    NSMapTable *_serialNumberToPersonUniqueIdentifierMapTable;
    ? _faceIDModel;
    NSUInteger _faceprintRequestRevision;
}




+(?)_concatenateFaceprintImageDescriptorBuffer:(?)arg0 withFaceprints:(?)arg1 forIdentityWithSerialNumberfaceprintLabels;
+(BOOL)getStoredRepresentationTag:(*unsigned int)arg0 forModelVersion:(NSUInteger)arg1 error:(*id)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)modelBuiltFromConfiguration:(id)arg0 dataProvider:(id)arg1 canceller:(id)arg2 error:(*id)arg3 ;
-(?)initWithFaceIDModel:(?)arg0 faceprintRequestRevisionpersonUniqueIdentifierToSerialNumberMapping;
-(BOOL)_getSerialNumber:(*int)arg0 forPersonUniqueIdentifier:(id)arg1 error:(*id)arg2 ;
-(NSUInteger)faceCountForPersonWithUniqueIdentifier:(id)arg0 ;
-(NSUInteger)faceprintRequestRevision;
-(NSUInteger)personCount;
-(id)_personPredictionsForFace:(id)arg0 withDescriptor:(*void)arg1 limit:(NSUInteger)arg2 faceIDCanceller:(struct CVMLCanceller *)arg3 error:(*id)arg4 ;
-(id)faceCountsForAllPersons;
-(id)faceCountsForPersonsWithUniqueIdentifiers:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)personPredictionsForFace:(id)arg0 withDescriptor:(*void)arg1 limit:(NSUInteger)arg2 canceller:(id)arg3 error:(*id)arg4 ;
-(id)personUniqueIdentifiers;
-(id)trainingFaceprintsForPersonWithUniqueIdentifier:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif