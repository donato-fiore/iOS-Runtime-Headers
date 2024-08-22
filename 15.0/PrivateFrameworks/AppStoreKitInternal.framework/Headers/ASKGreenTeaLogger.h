// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASKGREENTEALOGGER_H
#define ASKGREENTEALOGGER_H


#import <Foundation/Foundation.h>


@interface ASKGreenTeaLogger : NSObject

@property (readonly, nonatomic) *ct_green_tea_logger_s logger; // ivar: _logger


-(id)init;
-(void)dealloc;
-(void)willAccessLocationForSearch;
-(void)willRequestAppList;
-(void)willTransmitLocationForSearch;


@end


#endif