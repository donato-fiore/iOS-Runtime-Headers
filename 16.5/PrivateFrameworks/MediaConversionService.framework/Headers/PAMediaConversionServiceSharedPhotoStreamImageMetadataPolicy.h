// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PAMEDIACONVERSIONSERVICESHAREDPHOTOSTREAMIMAGEMETADATAPOLICY_H
#define PAMEDIACONVERSIONSERVICESHAREDPHOTOSTREAMIMAGEMETADATAPOLICY_H



#import "PAMediaConversionServiceDefaultImageMetadataPolicy.h"

@interface PAMediaConversionServiceSharedPhotoStreamImageMetadataPolicy : PAMediaConversionServiceDefaultImageMetadataPolicy



+(BOOL)supportsSecureCoding;
+(id)policyWithAllowLocation:(BOOL)arg0 ;
+(void)_filterImageProperties:(id)arg0 metadataWithKey:(id)arg1 preserveProperties:(id)arg2 ;
-(BOOL)metadataNeedsProcessing:(id)arg0 ;
-(id)processMetadata:(id)arg0 ;


@end


#endif