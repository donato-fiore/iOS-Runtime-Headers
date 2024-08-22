// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKFEATUREAVAILABILITYMUSTBETRUEREQUIREMENT_H
#define HKFEATUREAVAILABILITYMUSTBETRUEREQUIREMENT_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HKFeatureAvailabilityMustBeTrueRequirement : NSObject <NSSecureCoding, NSCopying>

 {
    BOOL _isTrue;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWhatMustBeTrue:(BOOL)arg0 ;
-(id)isSatisfiedWithDataSource:(id)arg0 error:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif