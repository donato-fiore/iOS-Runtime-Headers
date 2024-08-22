// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBKITSTATISTICS_H
#define WEBKITSTATISTICS_H


#import <Foundation/Foundation.h>


@interface WebKitStatistics : NSObject



+(int)HTMLRepresentationCount;
+(int)bridgeCount;
+(int)dataSourceCount;
+(int)frameCount;
+(int)viewCount;
+(int)webViewCount;


@end


#endif