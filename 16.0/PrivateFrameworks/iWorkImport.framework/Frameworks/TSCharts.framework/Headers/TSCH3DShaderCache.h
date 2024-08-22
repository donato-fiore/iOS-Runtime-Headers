// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DSHADERCACHE_H
#define TSCH3DSHADERCACHE_H

@class NSMutableArray;
@protocol TSCH3DProtectResourceDelegate;

#import <Foundation/Foundation.h>


@interface TSCH3DShaderCache : NSObject {
    NSMutableArray *_shaderCache;
}


@property (weak, nonatomic) NSObject<TSCH3DProtectResourceDelegate> *protectResourceDelegate; // ivar: _protectResourceDelegate


-(id)description;
-(id)init;
-(id)shaderForShaderContext:(id)arg0 initializeProgramBlock:(id)arg1 ;
-(void)dealloc;
-(void)debug_verifyUniqueShadersInCache;
-(void)flush;
-(void)p_ensureCacheLimit;
-(void)p_unprotectAllCacheItems;


@end


#endif