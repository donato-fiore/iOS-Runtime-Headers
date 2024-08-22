// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWLIMITEDGMERRORLOGGER_H
#define BWLIMITEDGMERRORLOGGER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BWLimitedGMErrorLogger : NSObject

@property (readonly, nonatomic) int currentLoggingCount; // ivar: _currentLoggingCount
@property (readonly, nonatomic) int maxLoggingCount; // ivar: _maxLoggingCount
@property (readonly, nonatomic) NSString *name; // ivar: _name


-(id)initWithName:(id)arg0 maxLoggingCount:(int)arg1 ;
-(void)dealloc;
-(void)logErrorNumber:(int)arg0 errorString:(id)arg1 ;


@end


#endif