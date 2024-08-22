// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTTIMERTIMEINTERVAL_H
#define MTTIMERTIMEINTERVAL_H

@class NSString;
@protocol MTDictionarySerializable, MTTimerTime;

#import <Foundation/Foundation.h>


@interface MTTimerTimeInterval : NSObject <MTDictionarySerializable, MTTimerTime>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat remainingTime; // ivar: _remainingTime
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTime:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimeInterval:(CGFloat)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif