// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFDATEDETECTOR_H
#define WFDATEDETECTOR_H


#import <Foundation/Foundation.h>


@interface WFDateDetector : NSObject



+(BOOL)stringContainsDates:(id)arg0 ;
+(id)datesInString:(id)arg0 error:(*id)arg1 ;
+(id)detectedDatesInString:(id)arg0 error:(*id)arg1 ;


@end


#endif