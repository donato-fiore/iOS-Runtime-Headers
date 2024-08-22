// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTENHANCEDLINKQUALITYMETRIC_H
#define CTENHANCEDLINKQUALITYMETRIC_H

@class NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTEnhancedLinkQualityMetric : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSData *enhancedLinkQuality; // ivar: _enhancedLinkQuality


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEnhancedLinkQuality:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif