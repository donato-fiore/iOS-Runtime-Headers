// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKFACEVIEWCLASSPREWARMCACHE_H
#define NTKFACEVIEWCLASSPREWARMCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface NTKFaceViewClassPrewarmCache : NSObject {
    NSMutableDictionary *_prewarmCache;
}




+(id)sharedInstance;
-(id)init;
-(id)prewarmDataForClass:(Class)arg0 ;
-(void)prewarmClasses:(id)arg0 ;


@end


#endif