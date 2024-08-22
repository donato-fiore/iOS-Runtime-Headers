// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUISIZECACHE_H
#define NUISIZECACHE_H


#import <Foundation/Foundation.h>


@interface NUISizeCache : NSObject {
    nui_size_cache _sizeCache;
    BOOL _threadSafe;
}




-(BOOL)getSize:(struct CGSize *)arg0 forTargetSize:(struct CGSize )arg1 isSizeDependentOnPerpendicularAxis:(BOOL)arg2 ;
-(id)initForAsynchronousAccess:(BOOL)arg0 ;
-(void)dealloc;
-(void)insertSize:(struct CGSize )arg0 forTargetSize:(struct CGSize )arg1 ;
-(void)invalidateCache;


@end


#endif