// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSPBTIMERCONTEXT_H
#define MSPBTIMERCONTEXT_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface MSPBTimerContext : NSObject

@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (nonatomic) BOOL isValid; // ivar: _isValid


+(id)contextWithDate:(id)arg0 ;
-(id)init;


@end


#endif