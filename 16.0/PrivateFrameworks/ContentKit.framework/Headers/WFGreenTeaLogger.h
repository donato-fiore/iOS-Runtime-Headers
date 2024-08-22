// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFGREENTEALOGGER_H
#define WFGREENTEALOGGER_H


#import <Foundation/Foundation.h>


@interface WFGreenTeaLogger : NSObject

@property (readonly, nonatomic) *ct_green_tea_logger_s logger; // ivar: _logger


+(id)sharedLogger;
+(void)log:(id)arg0 ;
-(id)init;
-(void)dealloc;
-(void)log:(id)arg0 ;


@end


#endif