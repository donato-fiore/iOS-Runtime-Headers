// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ENREGIONSERVEREXPOSURECONFIGURATION_H
#define ENREGIONSERVEREXPOSURECONFIGURATION_H

@class NSString, NSArray, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ENRegionServerExposureConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (readonly, copy, nonatomic) NSArray *classificationCriteria; // ivar: _classificationCriteria
@property (readonly, nonatomic) BOOL enableRecursiveReportType; // ivar: _enableRecursiveReportType
@property (readonly, copy, nonatomic) NSDictionary *exposureConfigurationValues; // ivar: _exposureConfigurationValues
@property (readonly, nonatomic) BOOL matchingRestrictedToRegion; // ivar: _matchingRestrictedToRegion
@property (readonly, nonatomic) CGFloat privacyParameterInputCandenceInterval; // ivar: _privacyParameterInputCandenceInterval


+(BOOL)supportsSecureCoding;
-(id)classificationCriteriaForName:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithServerResponseDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif