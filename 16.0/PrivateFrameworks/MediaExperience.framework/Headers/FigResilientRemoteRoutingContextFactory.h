// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGRESILIENTREMOTEROUTINGCONTEXTFACTORY_H
#define FIGRESILIENTREMOTEROUTINGCONTEXTFACTORY_H

@class NSString;
@protocol FigRoutingContextFactory;

#import <Foundation/Foundation.h>


@interface FigResilientRemoteRoutingContextFactory : NSObject <FigRoutingContextFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(int)copyAllAudioContexts:(struct __CFArray **)arg0 ;
-(int)copyContextForUUIDWithAllocator:(struct __CFAllocator *)arg0 options:(struct __CFDictionary *)arg1 context:(struct OpaqueFigRoutingContext **)arg2 ;
-(int)copyDefaultContextWithAllocator:(struct __CFAllocator *)arg0 options:(struct __CFDictionary *)arg1 context:(struct OpaqueFigRoutingContext **)arg2 ;
-(int)copyDisplayMenuVideoContextWithAllocator:(struct __CFAllocator *)arg0 options:(struct __CFDictionary *)arg1 context:(struct OpaqueFigRoutingContext **)arg2 ;
-(int)copySidePlayContextWithAllocator:(struct __CFAllocator *)arg0 options:(struct __CFDictionary *)arg1 context:(struct OpaqueFigRoutingContext **)arg2 ;
-(int)copySystemAudioContextWithAllocator:(struct __CFAllocator *)arg0 options:(struct __CFDictionary *)arg1 context:(struct OpaqueFigRoutingContext **)arg2 ;
-(int)copySystemMirroringContextWithAllocator:(struct __CFAllocator *)arg0 options:(struct __CFDictionary *)arg1 context:(struct OpaqueFigRoutingContext **)arg2 ;
-(int)copySystemMusicContextWithAllocator:(struct __CFAllocator *)arg0 options:(struct __CFDictionary *)arg1 context:(struct OpaqueFigRoutingContext **)arg2 ;
-(int)copySystemRemotePoolContextWithAllocator:(struct __CFAllocator *)arg0 options:(struct __CFDictionary *)arg1 context:(struct OpaqueFigRoutingContext **)arg2 ;
-(int)createAudioContextWithAllocator:(struct __CFAllocator *)arg0 options:(struct __CFDictionary *)arg1 context:(struct OpaqueFigRoutingContext **)arg2 ;
-(int)createControlChannelOnlyContextWithAllocator:(struct __CFAllocator *)arg0 options:(struct __CFDictionary *)arg1 context:(struct OpaqueFigRoutingContext **)arg2 ;
-(int)createPerAppSecondDisplayContextWithAllocator:(struct __CFAllocator *)arg0 options:(struct __CFDictionary *)arg1 context:(struct OpaqueFigRoutingContext **)arg2 ;
-(int)createRemoteMusicControllerContextWithAllocator:(struct __CFAllocator *)arg0 options:(struct __CFDictionary *)arg1 context:(struct OpaqueFigRoutingContext **)arg2 ;
-(int)createVideoContextWithAllocator:(struct __CFAllocator *)arg0 options:(struct __CFDictionary *)arg1 context:(struct OpaqueFigRoutingContext **)arg2 ;


@end


#endif