// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSRELATIVEDATETIMERFIREINFO_H
#define BSRELATIVEDATETIMERFIREINFO_H

@class NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface BSRelativeDateTimerFireInfo : NSObject <NSCopying>



@property (readonly, nonatomic) NSInteger comparedToNow; // ivar: _comparedToNow
@property (readonly, copy, nonatomic) NSDate *fireDate; // ivar: _fireDate
@property (readonly, nonatomic) NSUInteger resolution; // ivar: _resolution
@property (readonly, nonatomic) NSUInteger value; // ivar: _value


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithValue:(NSUInteger)arg0 resolution:(NSUInteger)arg1 comparedToNow:(NSInteger)arg2 fireDate:(id)arg3 ;


@end


#endif