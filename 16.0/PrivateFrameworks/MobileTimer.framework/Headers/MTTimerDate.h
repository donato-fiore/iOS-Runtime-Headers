// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTTIMERDATE_H
#define MTTIMERDATE_H

@class NSDate, NSString;
@protocol MTDictionarySerializable, MTTimerTime;

#import <Foundation/Foundation.h>


@interface MTTimerDate : NSObject <MTDictionarySerializable, MTTimerTime>



@property (copy, nonatomic) id *currentDateProvider; // ivar: _currentDateProvider
@property (copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat remainingTime;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTime:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDate:(id)arg0 ;
-(id)initWithDate:(id)arg0 currentDateProvider:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif