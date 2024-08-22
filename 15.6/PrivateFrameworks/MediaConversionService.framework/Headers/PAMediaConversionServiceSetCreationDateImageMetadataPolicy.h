// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PAMEDIACONVERSIONSERVICESETCREATIONDATEIMAGEMETADATAPOLICY_H
#define PAMEDIACONVERSIONSERVICESETCREATIONDATEIMAGEMETADATAPOLICY_H

@class NSDate, NSTimeZone;


#import "PAMediaConversionServiceImageMetadataPolicy.h"

@interface PAMediaConversionServiceSetCreationDateImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy

@property (retain) NSDate *creationDate; // ivar: _creationDate
@property (retain) NSTimeZone *timeZone; // ivar: _timeZone


+(BOOL)supportsSecureCoding;
+(id)policyWithCreationDate:(id)arg0 inTimeZone:(id)arg1 ;
-(BOOL)metadataNeedsProcessing:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)processMetadata:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif