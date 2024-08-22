// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKFEATUREAVAILABILITYREQUIREMENTSET_H
#define HKFEATUREAVAILABILITYREQUIREMENTSET_H

@class NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKFeatureAvailabilityRequirementSet : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSDictionary *requirementsByContext; // ivar: _requirementsByContext


+(BOOL)supportsSecureCoding;
+(id)noRequirements;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)allObservableRequirements;
-(id)allRequirementIdentifiers;
-(id)allRequirements;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)evaluationByContextWithDataSource:(id)arg0 overrides:(id)arg1 error:(*id)arg2 ;
-(id)evaluationForContext:(id)arg0 dataSource:(id)arg1 overrides:(id)arg2 error:(*id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequirementsByContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif