// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RTPREDICTEDDATE_H
#define RTPREDICTEDDATE_H

@class NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface RTPredictedDate : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) CGFloat confidence; // ivar: _confidence
@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) CGFloat uncertainty; // ivar: _uncertainty


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDate:(id)arg0 uncertainty:(CGFloat)arg1 confidence:(CGFloat)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif