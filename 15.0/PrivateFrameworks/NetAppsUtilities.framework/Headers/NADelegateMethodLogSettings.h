// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NADELEGATEMETHODLOGSETTINGS_H
#define NADELEGATEMETHODLOGSETTINGS_H

@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface NADelegateMethodLogSettings : NSObject

@property (readonly, copy, nonatomic) id *argumentFormatter; // ivar: _argumentFormatter
@property (readonly, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly, nonatomic) unsigned char logType; // ivar: _logType
@property (copy, nonatomic) id *logger; // ivar: _logger


-(id)formattedDescriptionForArgument:(id)arg0 ;
-(id)init;
-(id)initWithLog:(id)arg0 logType:(unsigned char)arg1 argumentFormatter:(id)arg2 ;


@end


#endif