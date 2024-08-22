// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDMCNOTIFICATION_H
#define HDMCNOTIFICATION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HDMCNotification : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *category; // ivar: _category
@property (readonly, nonatomic) NSInteger daysShifted; // ivar: _daysShifted
@property (readonly, nonatomic) NSInteger fertileWindowEndDayIndex; // ivar: _fertileWindowEndDayIndex
@property (readonly, nonatomic) NSInteger fireOnDayIndex; // ivar: _fireOnDayIndex


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)eventIdentifierFromUpdateFertileWindowNotification;
-(id)initWithFireOnDayIndex:(NSInteger)arg0 category:(id)arg1 ;
-(id)initWithFireOnDayIndex:(NSInteger)arg0 category:(id)arg1 fertileWindowEndDayIndex:(NSInteger)arg2 daysShifted:(NSInteger)arg3 ;


@end


#endif