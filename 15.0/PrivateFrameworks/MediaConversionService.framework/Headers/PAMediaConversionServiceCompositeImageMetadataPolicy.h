// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PAMEDIACONVERSIONSERVICECOMPOSITEIMAGEMETADATAPOLICY_H
#define PAMEDIACONVERSIONSERVICECOMPOSITEIMAGEMETADATAPOLICY_H

@class NSArray;


#import "PAMediaConversionServiceImageMetadataPolicy.h"

@interface PAMediaConversionServiceCompositeImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy

@property (retain) NSArray *policies; // ivar: _policies


+(BOOL)supportsSecureCoding;
+(id)policyWithPolicies:(id)arg0 ;
-(BOOL)metadataNeedsProcessing:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)processMetadata:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif