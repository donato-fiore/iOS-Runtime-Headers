// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APMEDIAINFO_H
#define APMEDIAINFO_H


#import <Foundation/Foundation.h>


@interface APMediaInfo : NSObject



+(BOOL)_shouldEnableMedia;
+(BOOL)shouldSubstituteStaticContentForVideo;
+(BOOL)shouldVideoAutoPlay;


@end


#endif