// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PAMEDIACONVERSIONSERVICEADDPFMEDIAMETADATAPOLICY_H
#define PAMEDIACONVERSIONSERVICEADDPFMEDIAMETADATAPOLICY_H



#import "PAMediaConversionServiceImageMetadataPolicy.h"

@interface PAMediaConversionServiceAddPFMediaMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy

@property unsigned char type; // ivar: _type
@property (retain) id *value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(id)policyWithType:(unsigned char)arg0 value:(id)arg1 ;
-(BOOL)metadataNeedsProcessing:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)processMetadata:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif