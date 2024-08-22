// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFURLDETECTOR_H
#define WFURLDETECTOR_H


#import <Foundation/Foundation.h>


@interface WFURLDetector : NSObject



+(BOOL)stringContainsURLs:(id)arg0 ;
+(BOOL)stringMatchesExactly:(id)arg0 ;
+(id)URLsInString:(id)arg0 error:(*id)arg1 ;


@end


#endif