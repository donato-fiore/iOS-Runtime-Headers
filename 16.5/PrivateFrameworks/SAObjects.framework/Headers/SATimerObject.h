// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SATIMEROBJECT_H
#define SATIMEROBJECT_H

@class NSNumber, NSString;


#import "SADomainObject.h"
#import "SADataSourceInfo.h"

@interface SATimerObject : SADomainObject

@property (retain, nonatomic) SADataSourceInfo *dataSourceInfo;
@property (copy, nonatomic) NSNumber *isFiring;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSNumber *timerValue;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *type;


+(id)object;
+(id)objectWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif