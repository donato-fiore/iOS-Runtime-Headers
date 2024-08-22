// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPTTIMEINTERVAL_H
#define PPTTIMEINTERVAL_H

@class NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PPTTimeInterval : NSObject <NSCopying, NSSecureCoding>



@property (readonly) NSDictionary *dictionary;
@property (readonly) CGFloat duration;
@property (readonly) CGFloat endTimestamp; // ivar: _endTimestamp
@property (readonly) NSDictionary *payload; // ivar: _payload
@property (readonly) CGFloat startTimestamp; // ivar: _startTimestamp


+(BOOL)supportsSecureCoding;
-(BOOL)containsTimeInterval:(id)arg0 ;
-(BOOL)containsTimestamp:(CGFloat)arg0 ;
-(BOOL)intersectsTimeInterval:(id)arg0 ;
-(BOOL)isAdjacentToTimeInterval:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTimeInterval:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)JSONRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartTimestamp:(CGFloat)arg0 endTimestamp:(CGFloat)arg1 payload:(id)arg2 ;
-(id)intersectionWithTimeInterval:(id)arg0 ;
-(id)subtractTimeInterval:(id)arg0 ;
-(id)unionWithTimeInterval:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif