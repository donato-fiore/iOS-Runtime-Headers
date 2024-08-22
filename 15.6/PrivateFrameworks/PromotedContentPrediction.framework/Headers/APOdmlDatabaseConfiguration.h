// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APODMLDATABASECONFIGURATION_H
#define APODMLDATABASECONFIGURATION_H



#import "APOdmlSingleton.h"

@interface APOdmlDatabaseConfiguration : APOdmlSingleton

@property (readonly, nonatomic) BOOL isDaemonProcess; // ivar: _isDaemonProcess


+(id)sharedInstance;
-(id)init;
-(void)setProcessToDaemon;


@end


#endif