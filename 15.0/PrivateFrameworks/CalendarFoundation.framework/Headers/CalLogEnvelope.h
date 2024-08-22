// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALLOGENVELOPE_H
#define CALLOGENVELOPE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CalLogEnvelope : NSObject

@property (retain, nonatomic) NSString *function; // ivar: _function
@property (nonatomic) int level; // ivar: _level
@property (retain, nonatomic) NSString *logName; // ivar: _logName
@property (nonatomic) unsigned int machPort; // ivar: _machPort
@property (retain, nonatomic) NSString *message; // ivar: _message
@property (nonatomic) int processID; // ivar: _processID
@property (retain, nonatomic) NSString *processName; // ivar: _processName
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


-(id)description;
-(id)init;
-(id)initWithLogName:(id)arg0 level:(int)arg1 message:(id)arg2 ;


@end


#endif