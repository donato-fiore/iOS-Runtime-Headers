// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PAMEDIACONVERSIONSERVICESETACCESSIBILITYDESCRIPTIONIMAGEMETADATAPOLICY_H
#define PAMEDIACONVERSIONSERVICESETACCESSIBILITYDESCRIPTIONIMAGEMETADATAPOLICY_H

@class NSString;


#import "PAMediaConversionServiceImageMetadataPolicy.h"

@interface PAMediaConversionServiceSetAccessibilityDescriptionImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy

@property (copy) NSString *accessibilityDescription; // ivar: _accessibilityDescription


+(BOOL)supportsSecureCoding;
+(id)policyWithAccessibilityDescription:(id)arg0 ;
-(BOOL)metadataNeedsProcessing:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)processMetadata:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif