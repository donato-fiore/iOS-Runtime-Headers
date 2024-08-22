// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OCPATTERN_H
#define OCPATTERN_H


#import <Foundation/Foundation.h>


@interface OCPattern : NSObject



+(id)blackAndWhiteImageDataWithPatternName:(id)arg0 ;
+(id)colorizedImageDataWithBlackAndWhiteImageData:(id)arg0 foregroundColor:(id)arg1 backgroundColor:(id)arg2 ;
+(id)presetPatternHeader;


@end


#endif