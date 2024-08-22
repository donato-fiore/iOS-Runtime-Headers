// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNPERSONSMODELCONFIGURATION_H
#define VNPERSONSMODELCONFIGURATION_H

@class NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "VNPersonsModelAlgorithm.h"

@interface VNPersonsModelConfiguration : NSObject <NSCopying, NSSecureCoding>

 {
    NSNumber *_explicitlySetMaximumIdentities;
    NSNumber *_explicitlySetMaximumTrainingFaceprintsPerIdentity;
}


@property (copy, nonatomic) VNPersonsModelAlgorithm *algorithm; // ivar: _algorithm
@property (nonatomic) NSUInteger faceprintRequestRevision; // ivar: _faceprintRequestRevision
@property (nonatomic) NSUInteger maximumIdentities;
@property (nonatomic) NSUInteger maximumTrainingFaceprintsPerIdentity;


+(BOOL)supportsSecureCoding;
+(NSUInteger)maximumAllowableFaceprintsPerIdentity;
+(NSUInteger)maximumAllowableIdentities;
-(BOOL)isEqual:(id)arg0 ;
-(id)algorithmOfClass:(Class)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)resolvedAlgorithmAndReturnError:(*id)arg0 ;
-(int)faceID2ModelMaximumElementsPerID;
-(int)faceID3IndexMode;
-(int)faceID3ModelMaximumElementsPerID;
-(int)faceID3ModelMaximumIDs;
-(int)faceID3ModelSeed;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif