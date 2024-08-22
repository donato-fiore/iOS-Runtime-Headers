// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APGREENTEALOGGER_H
#define APGREENTEALOGGER_H


#import <Foundation/Foundation.h>


@interface APGreenTeaLogger : NSObject

@property (readonly, nonatomic) *ct_green_tea_logger_s logger; // ivar: _logger


-(id)init;
-(void)dealloc;
-(void)willAccessLocation;
-(void)willTransmitLocationFor:(NSUInteger)arg0 ;


@end


#endif