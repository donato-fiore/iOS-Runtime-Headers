// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFDATADETECTOR_H
#define WFDATADETECTOR_H


#import <Foundation/Foundation.h>


@interface WFDataDetector : NSObject



+(BOOL)hasResultForString:(id)arg0 ofTypes:(NSUInteger)arg1 ;
+(id)resultsForString:(id)arg0 ofTypes:(NSUInteger)arg1 error:(*id)arg2 ;


@end


#endif