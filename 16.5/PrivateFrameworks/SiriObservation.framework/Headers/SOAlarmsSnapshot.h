// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SOALARMSSNAPSHOT_H
#define SOALARMSSNAPSHOT_H

@class NSDictionary, NSDate, NSOrderedSet;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SOAlarmsSnapshot : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSDictionary *alarmsByID; // ivar: _alarmsByID
@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy, nonatomic) NSOrderedSet *dismissedAlarmIDs; // ivar: _dismissedAlarmIDs
@property (readonly, copy, nonatomic) NSOrderedSet *firingAlarmIDs; // ivar: _firingAlarmIDs


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBuilder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDate:(id)arg0 alarmsByID:(id)arg1 firingAlarmIDs:(id)arg2 dismissedAlarmIDs:(id)arg3 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif