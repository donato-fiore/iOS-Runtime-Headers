// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDBOUND_H
#define HDBOUND_H

@class NSMeasurement;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HDBound : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) BOOL open; // ivar: _open
@property (copy, nonatomic) NSMeasurement *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToBound:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithValue:(id)arg0 open:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif