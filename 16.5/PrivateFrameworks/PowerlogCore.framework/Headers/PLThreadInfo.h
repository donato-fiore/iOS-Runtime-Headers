// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLTHREADINFO_H
#define PLTHREADINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PLThreadInfo : NSObject

@property BOOL isNamed; // ivar: _isNamed
@property CGFloat systemTime; // ivar: _systemTime
@property NSUInteger threadID; // ivar: _threadID
@property (retain) NSString *threadName; // ivar: _threadName
@property CGFloat userTime; // ivar: _userTime


-(BOOL)isEqualToThreadInfo:(id)arg0 ;
-(id)description;
-(id)diffSinceBaseline:(id)arg0 ;
-(id)initWithThread:(NSUInteger)arg0 inProcess:(int)arg1 ;


@end


#endif