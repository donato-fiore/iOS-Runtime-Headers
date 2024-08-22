// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIEVALUATIONSTATUSCURSOR_H
#define TRIEVALUATIONSTATUSCURSOR_H

@class NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TRIEvaluationStatusCursor : NSObject <NSCopying, NSSecureCoding>

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