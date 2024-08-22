// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PAMEDIACONVERSIONSERVICESETLOCATIONIMAGEMETADATAPOLICY_H
#define PAMEDIACONVERSIONSERVICESETLOCATIONIMAGEMETADATAPOLICY_H

@class CLLocation;


#import "PAMediaConversionServiceImageMetadataPolicy.h"

@interface PAMediaConversionServiceSetLocationImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy

@property (retain) CLLocation *location; // ivar: _location


+(BOOL)supportsSecureCoding;
+(id)policyWithLocation:(id)arg0 ;
-(BOOL)metadataNeedsProcessing:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)processMetadata:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif