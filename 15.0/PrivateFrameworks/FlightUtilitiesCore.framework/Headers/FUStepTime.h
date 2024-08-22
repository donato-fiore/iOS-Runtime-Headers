// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FUSTEPTIME_H
#define FUSTEPTIME_H

@class NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface FUStepTime : NSObject <NSSecureCoding, NSCopying>



@property (retain) NSDate *date; // ivar: _date
@property (readonly) CGFloat timeIntervalSinceNow;
@property NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 date:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif