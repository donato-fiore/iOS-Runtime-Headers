// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFIMGARRAYCACHE_H
#define WFIMGARRAYCACHE_H

@class NSMutableString;

#import <Foundation/Foundation.h>


@interface WFImgArrayCache : NSObject {
    NSMutableString *imageAlternativeDescriptions;
    NSInteger numberOfUnknownSizedImages;
    NSInteger numberOfKnownImagePixels;
}




+(id)imgArrayCacheWithArray:(id)arg0 ;
-(NSInteger)numberOfKnownImagePixels;
-(NSInteger)numberOfUnknownSizedImages;
-(id)imageAlternativeDescriptions;
-(id)initWithArray:(id)arg0 ;
-(void)dealloc;


@end


#endif