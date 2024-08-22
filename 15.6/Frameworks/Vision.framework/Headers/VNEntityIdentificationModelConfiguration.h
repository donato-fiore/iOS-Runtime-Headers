// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNENTITYIDENTIFICATIONMODELCONFIGURATION_H
#define VNENTITYIDENTIFICATIONMODELCONFIGURATION_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "VNRequestSpecifier.h"

@interface VNEntityIdentificationModelConfiguration : NSObject <NSCopying, NSSecureCoding>

 {
    NSUInteger _maximumEntities;
    NSUInteger _maximumTrainingPrintsPerEntity;
}


@property (readonly, copy) VNRequestSpecifier *entityPrintOriginatingRequestSpecifier; // ivar: _entityPrintOriginatingRequestSpecifier
@property NSUInteger maximumEntities;
@property NSUInteger maximumTrainingPrintsPerEntity;


+(BOOL)supportsSecureCoding;
+(NSUInteger)maximumAllowableEntities;
+(NSUInteger)maximumAllowableFaceprintsPerIdentity;
+(id)newConfigurationForEntityPrintsGeneratedByRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEntityPrintOriginatingRequestSpecifier:(id)arg0 ;
-(int)faceIDModelMaximumElementsPerID;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif