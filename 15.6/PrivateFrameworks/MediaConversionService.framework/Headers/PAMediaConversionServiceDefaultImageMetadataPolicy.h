// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PAMEDIACONVERSIONSERVICEDEFAULTIMAGEMETADATAPOLICY_H
#define PAMEDIACONVERSIONSERVICEDEFAULTIMAGEMETADATAPOLICY_H



#import "PAMediaConversionServiceImageMetadataPolicy.h"

@interface PAMediaConversionServiceDefaultImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy

@property float lossyCompressionQuality; // ivar: _lossyCompressionQuality


+(BOOL)supportsSecureCoding;
+(id)policyWithLossyCompressionQuality:(float)arg0 ;
+(id)standardPolicy;
-(BOOL)metadataNeedsProcessing:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLossyCompressionQuality:(float)arg0 ;
-(id)processMetadata:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif