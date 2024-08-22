// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNENTITYIDENTIFICATIONMODELTRAINEDMODEL_H
#define VNENTITYIDENTIFICATIONMODELTRAINEDMODEL_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "VNRequestSpecifier.h"

@interface VNEntityIdentificationModelTrainedModel : NSObject <NSSecureCoding>

 {
    ? _faceIDModel;
    VNRequestSpecifier *_entityPrintOriginatingRequestSpecifier;
    int _maximumElementsPerID;
    NSArray *_entityUniqueIdentifiers;
    NSArray *_entityPrintCounts;
}




+(BOOL)supportsSecureCoding;
+(id)trainedModelBuiltFromConfiguration:(id)arg0 dataProvider:(id)arg1 canceller:(id)arg2 error:(*id)arg3 ;
-(NSUInteger)entityCount;
-(NSUInteger)indexOfEntityWithUniqueIdentifier:(id)arg0 ;
-(NSUInteger)printCountForEntityWithUniqueIdentifier:(id)arg0 ;
-(id)entityPrintOriginatingRequestSpecifier;
-(id)entityUniqueIdentifiers;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFaceIDModel:(struct shared_ptr<vision::mod::FaceIDModel> )arg0 entityPrintOriginatingRequestSpecifier:(id)arg1 maximumElementsPerID:(NSUInteger)arg2 entityUniqueIdentifiers:(id)arg3 entityPrintCounts:(id)arg4 ;
-(id)predictionsForObservation:(id)arg0 limit:(NSUInteger)arg1 canceller:(id)arg2 error:(*id)arg3 ;
-(id)printCountsForAllEntities;
-(id)printCountsForEntitiesWithUniqueIdentifiers:(id)arg0 ;
-(id)trainingEntityPrintsForEntityWithUniqueIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)uniqueIdentifierOfEntityAtIndex:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif