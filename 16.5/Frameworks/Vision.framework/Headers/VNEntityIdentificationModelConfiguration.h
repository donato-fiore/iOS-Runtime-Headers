// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNENTITYIDENTIFICATIONMODELCONFIGURATION_H
#define VNENTITYIDENTIFICATIONMODELCONFIGURATION_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "VNEntityIdentificationModelAlgorithm.h"
#import "VNRequestSpecifier.h"

@interface VNEntityIdentificationModelConfiguration : NSObject <NSCopying, NSSecureCoding>

 {
    NSUInteger _maximumEntities;
    NSUInteger _maximumTrainingPrintsPerEntity;
}


@property (readonly, copy) NSArray *acceptableEntityPrintOriginatingRequestSpecifiers;
@property (copy, nonatomic) VNEntityIdentificationModelAlgorithm *algorithm; // ivar: _algorithm
@property (readonly, copy) VNRequestSpecifier *entityPrintOriginatingRequestSpecifier; // ivar: _entityPrintOriginatingRequestSpecifier
@property NSUInteger maximumEntities;
@property NSUInteger maximumTrainingPrintsPerEntity;


+(BOOL)supportsSecureCoding;
+(NSUInteger)maximumAllowableEntities;
+(NSUInteger)maximumAllowableFaceprintsPerIdentity;
+(id)newConfigurationForEntityPrintsGeneratedByRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)algorithmOfClass:(Class)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEntityPrintOriginatingRequestSpecifier:(id)arg0 ;
-(id)resolvedAlgorithmAndReturnError:(*id)arg0 ;
-(int)faceID3IndexMode;
-(int)faceID3ModelMaximumElementsPerID;
-(int)faceID3ModelMaximumIDs;
-(int)faceID3ModelSeed;
-(int)faceIDModelMaximumElementsPerID;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif