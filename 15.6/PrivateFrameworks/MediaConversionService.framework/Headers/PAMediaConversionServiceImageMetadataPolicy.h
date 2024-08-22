// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PAMEDIACONVERSIONSERVICEIMAGEMETADATAPOLICY_H
#define PAMEDIACONVERSIONSERVICEIMAGEMETADATAPOLICY_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PAMediaConversionServiceImageMetadataPolicy : NSObject <NSSecureCoding>





+(BOOL)supportsSecureCoding;
+(id)standardPolicy;
-(BOOL)metadataNeedsProcessing:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)processMetadata:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif