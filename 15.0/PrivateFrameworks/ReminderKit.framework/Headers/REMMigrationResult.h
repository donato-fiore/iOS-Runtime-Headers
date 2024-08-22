// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMMIGRATIONRESULT_H
#define REMMIGRATIONRESULT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface REMMigrationResult : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL isObserver; // ivar: _isObserver
@property (readonly, nonatomic) NSUInteger listsMigrated; // ivar: _listsMigrated
@property (readonly, nonatomic) NSString *log; // ivar: _log
@property (readonly, nonatomic) NSUInteger remindersMigrated; // ivar: _remindersMigrated
@property (readonly, nonatomic) NSString *state; // ivar: _state
@property (readonly, nonatomic) CGFloat timeElapsed; // ivar: _timeElapsed


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithState:(id)arg0 IsObserver:(BOOL)arg1 timeElapsed:(CGFloat)arg2 listsMigrated:(NSUInteger)arg3 remindersMigrated:(NSUInteger)arg4 log:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif