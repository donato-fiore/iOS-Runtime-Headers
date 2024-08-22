// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RCREGULATORYLOGGER_H
#define RCREGULATORYLOGGER_H


#import <Foundation/Foundation.h>


@interface RCRegulatoryLogger : NSObject

@property (readonly, nonatomic) *ct_green_tea_logger_s logger; // ivar: _logger


-(id)init;
-(void)dealloc;
-(void)readingAudioData;
-(void)transmittingAudioData;


@end


#endif