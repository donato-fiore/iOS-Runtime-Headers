// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAALARMOBJECT_H
#define SAALARMOBJECT_H

@class NSNumber, NSArray, NSString;


#import "SADomainObject.h"
#import "SADataSourceInfo.h"

@interface SAAlarmObject : SADomainObject

@property (retain, nonatomic) SADataSourceInfo *dataSourceInfo;
@property (copy, nonatomic) NSNumber *enabled;
@property (copy, nonatomic) NSNumber *firing;
@property (copy, nonatomic) NSArray *frequency;
@property (copy, nonatomic) NSNumber *hour;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSNumber *minute;
@property (copy, nonatomic) NSNumber *relativeOffsetMinutes;


+(id)object;
+(id)objectWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif