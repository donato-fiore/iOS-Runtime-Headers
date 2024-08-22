// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCWIFIUTILS_H
#define VCWIFIUTILS_H


#import <Foundation/Foundation.h>


@interface VCWiFiUtils : NSObject



+(BOOL)copyAWDLChannelSequence:(*id)arg0 twoPtFourGhzChannelCount:(*int)arg1 fiveGhzChannelCount:(*int)arg2 dfsChannelCount:(*int)arg3 inactiveSlotCount:(*int)arg4 ;
+(BOOL)getInfraChannelNumber:(*int)arg0 is5Ghz:(*BOOL)arg1 ;


@end


#endif