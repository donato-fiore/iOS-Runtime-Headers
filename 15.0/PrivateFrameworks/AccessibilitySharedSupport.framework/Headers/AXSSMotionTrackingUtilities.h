// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXSSMOTIONTRACKINGUTILITIES_H
#define AXSSMOTIONTRACKINGUTILITIES_H


#import <Foundation/Foundation.h>


@interface AXSSMotionTrackingUtilities : NSObject



+(BOOL)_axss_iAPInterfaceExistsForHIDDeviceService:(unsigned int)arg0 ;
+(BOOL)axss_HIDDeviceIsMFiAuthenticated:(id)arg0 ;
+(id)axss_frequencyElementMatchingDict;
+(id)axss_statusElementMatchingDict;
+(id)axss_xPositionElementMatchingDict;
+(id)axss_yPositionElementMatchingDict;


@end


#endif