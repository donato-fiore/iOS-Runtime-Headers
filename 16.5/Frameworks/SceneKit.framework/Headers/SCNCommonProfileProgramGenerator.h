// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNCOMMONPROFILEPROGRAMGENERATOR_H
#define SCNCOMMONPROFILEPROGRAMGENERATOR_H


#import <Foundation/Foundation.h>


@interface SCNCommonProfileProgramGenerator : NSObject {
    os_unfair_lock_s _programMutex;
    *__CFDictionary _shaders;
    *__CFDictionary _trackedResourcesToHashcode;
}


@property (readonly, nonatomic) int profile;


+(id)deferredGeneratorWithProfile:(int)arg0 ;
+(id)generatorWithProfile:(int)arg0 allowingHotReload:(BOOL)arg1 ;
-(?)programWithHashCode:(?)arg0 engineContext:(?)arg1 trackedResourceintrospectionDataPtr;
-(id)init;
-(void)dealloc;
-(void)emptyShaderCache;
-(void)releaseProgramForResource:(id)arg0 ;


@end


#endif