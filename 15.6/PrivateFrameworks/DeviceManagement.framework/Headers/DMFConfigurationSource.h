// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMFCONFIGURATIONSOURCE_H
#define DMFCONFIGURATIONSOURCE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "DMFReportingRequirements.h"

@interface DMFConfigurationSource : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *machServiceName; // ivar: _machServiceName
@property (copy, nonatomic) NSString *organizationIdentifier; // ivar: _organizationIdentifier
@property (retain, nonatomic) DMFReportingRequirements *reportingRequirements; // ivar: _reportingRequirements


+(BOOL)supportsSecureCoding;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif