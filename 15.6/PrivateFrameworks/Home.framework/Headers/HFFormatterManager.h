// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFFORMATTERMANAGER_H
#define HFFORMATTERMANAGER_H


#import <Foundation/Foundation.h>

#import "HFTemperatureFormatter.h"

@interface HFFormatterManager : NSObject

@property (retain, nonatomic) HFTemperatureFormatter *temperatureFormatter; // ivar: _temperatureFormatter


+(id)sharedInstance;
-(id)arcDegreeFormatter;
-(id)booleanFormatter;
-(id)emptyStringFormatter;
-(id)identityFormatter;
-(id)init;
-(id)luxFormatter;
-(id)percentFormatter;
-(id)relativeDateFormatter;
-(id)timeFormatter;
-(id)timeIntervalFormatter;
-(void)registerTemperatureFormatter:(id)arg0 ;


@end


#endif