// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUFASTREADINVALIDATINGCACHE_H
#define TSUFASTREADINVALIDATINGCACHE_H

@class NSCondition;

#import <Foundation/Foundation.h>


@interface TSUFastReadInvalidatingCache : NSObject {
    id *mGenerator;
    uint8_t mValue;
    uint8_t mReaderCount;
    uint8_t mToDispose;
    BOOL mReentrant;
    NSCondition *mCondition;
    BOOL mIsGenerating;
}




-(id)initForReentrant:(BOOL)arg0 withGenerator:(id)arg1 ;
-(id)value;
-(void)dealloc;
-(void)invalidate;
-(void)p_setValue:(id)arg0 ;


@end


#endif