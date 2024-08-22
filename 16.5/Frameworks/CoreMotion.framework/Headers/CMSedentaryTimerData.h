// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMSEDENTARYTIMERDATA_H
#define CMSEDENTARYTIMERDATA_H

@class NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CMSedentaryTimerData : NSObject <NSSecureCoding, NSCopying>

 {
    CGFloat fStartDate;
    CGFloat fFiredDate;
    NSInteger fAlarmType;
    BOOL fDidWake;
}


@property (readonly, nonatomic) NSInteger alarmType;
@property (readonly, nonatomic) BOOL didWake;
@property (readonly, nonatomic) NSDate *firedDate;
@property (readonly, nonatomic) NSDate *startDate;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartDate:(CGFloat)arg0 firedDate:(CGFloat)arg1 alarmType:(NSInteger)arg2 didWake:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif