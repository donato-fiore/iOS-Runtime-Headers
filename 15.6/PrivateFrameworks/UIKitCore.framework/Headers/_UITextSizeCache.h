// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UITEXTSIZECACHE_H
#define _UITEXTSIZECACHE_H


#import <Foundation/Foundation.h>


@interface _UITextSizeCache : NSObject {
    ui_size_cache _cache;
}




-(BOOL)getSize:(struct CGSize *)arg0 baselineInfo:(struct ? *)arg1 forTargetSize:(struct CGSize )arg2 isMultiline:(BOOL)arg3 ;
-(id)description;
-(void)addSize:(struct CGSize )arg0 baselineInfo:(struct ? *)arg1 forTargetSize:(struct CGSize )arg2 ;
-(void)removeAllSizes;


@end


#endif