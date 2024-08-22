// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIALLOCATIONSTATUSCURSOR_H
#define TRIALLOCATIONSTATUSCURSOR_H

@class NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TRIAllocationStatusCursor : NSObject <NSCopying, NSSecureCoding>

 {
    CGFloat _secondsFromEpoch;
}


@property (readonly, nonatomic) NSDate *date;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSecondsFromEpoch:(CGFloat)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif