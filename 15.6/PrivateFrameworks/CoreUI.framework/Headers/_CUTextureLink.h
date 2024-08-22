// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CUTEXTURELINK_H
#define _CUTEXTURELINK_H

@class NSString;
@protocol TXRDataSourceProvider, TXRBufferAllocator;

#import <Foundation/Foundation.h>

#import "CUINamedTexture.h"

@interface _CUTextureLink : NSObject <TXRDataSourceProvider>

 {
    CUINamedTexture *_namedTexture;
    id<TXRBufferAllocator> *_bufferAllocator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)bufferAllocator;
-(id)namedTexture;
-(id)provideImageInfoAtLevel:(NSUInteger)arg0 element:(NSUInteger)arg1 face:(NSUInteger)arg2 ;
-(id)provideTextureInfo;
-(void)dealloc;
-(void)setBufferAllocator:(id)arg0 ;
-(void)setNamedTexture:(id)arg0 ;


@end


#endif