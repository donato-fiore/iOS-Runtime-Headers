// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNPERSONSMODELCONFIGURATION_H
#define VNPERSONSMODELCONFIGURATION_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VNPersonsModelConfiguration : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSUInteger faceprintRequestRevision; // ivar: _faceprintRequestRevision
@property (nonatomic) NSUInteger maximumIdentities; // ivar: _maximumIdentities
@property (nonatomic) NSUInteger maximumTrainingFaceprintsPerIdentity; // ivar: _maximumTrainingFaceprintsPerIdentity


+(BOOL)supportsSecureCoding;
+(NSUInteger)maximumAllowableFaceprintsPerIdentity;
+(NSUInteger)maximumAllowableIdentities;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(int)faceIDModelMaximumElementsPerID;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif