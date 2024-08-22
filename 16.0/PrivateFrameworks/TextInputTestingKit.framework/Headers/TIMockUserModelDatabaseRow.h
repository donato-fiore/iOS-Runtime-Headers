// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIMOCKUSERMODELDATABASEROW_H
#define TIMOCKUSERMODELDATABASEROW_H

@class NSDate, NSString, NSData, NSNumber;

#import <Foundation/Foundation.h>


@interface TIMockUserModelDatabaseRow : NSObject

@property (retain) NSDate *creationDate; // ivar: _creationDate
@property (retain) NSString *inputMode; // ivar: _inputMode
@property (retain) NSString *key; // ivar: _key
@property (retain) NSDate *lastUpdateDate; // ivar: _lastUpdateDate
@property (retain) NSData *properties; // ivar: _properties
@property (retain) NSNumber *realValue; // ivar: _realValue
@property (retain) NSNumber *secondaryValue; // ivar: _secondaryValue
@property (retain) NSNumber *value; // ivar: _value


-(BOOL)isMatchForKey:(id)arg0 forInputMode:(id)arg1 sinceDate:(id)arg2 ;
-(BOOL)isMatchForKeyPrefix:(id)arg0 forInputMode:(id)arg1 sinceDate:(id)arg2 ;
-(BOOL)isMatchForKeyPrefix:(id)arg0 forInputMode:(id)arg1 weeklyKeySuffixes:(id)arg2 endDate:(id)arg3 ;
-(BOOL)isMatchSinceDate:(id)arg0 ;
-(id)initWithKey:(id)arg0 inputMode:(id)arg1 value:(id)arg2 secondaryValue:(id)arg3 realValue:(id)arg4 properties:(id)arg5 creationDate:(id)arg6 lastUpdateDate:(id)arg7 ;


@end


#endif