// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDMEASUREDRESULT_H
#define HDMEASUREDRESULT_H

@class NSMeasurement, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "HDLimit.h"

@interface HDMeasuredResult : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) HDLimit *limit; // ivar: _limit
@property (readonly, copy, nonatomic) NSMeasurement *measurement; // ivar: _measurement
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) BOOL valueWithinLimits; // ivar: _valueWithinLimits


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToMeasuredResult:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 measurement:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif