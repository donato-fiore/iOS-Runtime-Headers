// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGSUGGESTIONSICSMETRICS_H
#define SGSUGGESTIONSICSMETRICS_H


#import <Foundation/Foundation.h>

#import "SGMFoundInAppsICS.h"

@interface SGSuggestionsICSMetrics : NSObject

@property (retain, nonatomic) SGMFoundInAppsICS *foundInAppsICS; // ivar: _foundInAppsICS


+(id)instance;
+(void)recordWithTimezoneValue:(struct SGMFoundInAppsICSTZValue_ )arg0 datetimeType:(struct SGMFoundInAppsDatetimeType_ )arg1 ;
-(id)init;


@end


#endif