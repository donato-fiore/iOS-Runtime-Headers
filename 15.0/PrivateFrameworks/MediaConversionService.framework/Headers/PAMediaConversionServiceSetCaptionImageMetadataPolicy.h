// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PAMEDIACONVERSIONSERVICESETCAPTIONIMAGEMETADATAPOLICY_H
#define PAMEDIACONVERSIONSERVICESETCAPTIONIMAGEMETADATAPOLICY_H

@class NSString;


#import "PAMediaConversionServiceImageMetadataPolicy.h"

@interface PAMediaConversionServiceSetCaptionImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy

@property (copy) NSString *caption; // ivar: _caption


+(BOOL)supportsSecureCoding;
+(id)policyWithCaption:(id)arg0 ;
-(BOOL)metadataNeedsProcessing:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)processMetadata:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif