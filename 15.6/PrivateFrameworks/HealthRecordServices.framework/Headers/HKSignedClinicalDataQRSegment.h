// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSIGNEDCLINICALDATAQRSEGMENT_H
#define HKSIGNEDCLINICALDATAQRSEGMENT_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKSignedClinicalDataQRSegment : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *dataValue; // ivar: _dataValue
@property (readonly, copy, nonatomic) NSString *fullQRCodeValue;
@property (readonly, nonatomic) NSInteger numberOfExpectedSiblings; // ivar: _numberOfExpectedSiblings
@property (readonly, nonatomic) NSInteger position; // ivar: _position


+(BOOL)supportsSecureCoding;
+(id)segmentFromQRCodeValue:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDataValue:(id)arg0 position:(NSInteger)arg1 numberOfExpectedSiblings:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif