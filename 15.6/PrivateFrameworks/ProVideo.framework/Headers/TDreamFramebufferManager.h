// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TDREAMFRAMEBUFFERMANAGER_H
#define TDREAMFRAMEBUFFERMANAGER_H

@class NSMutableArray, NSString;

#import <Foundation/Foundation.h>

#import "TDreamFramebuffer.h"

@interface TDreamFramebufferManager : NSObject {
    id *memoryWarningObserver;
    NSMutableArray *framebufferArrayLarge;
    NSMutableArray *framebufferArraySmall;
    NSString *actualLookUp;
    NSString *actualPalette;
    CGSize smallUseSize;
    CGSize largeUseSize;
}


@property (retain, nonatomic) TDreamFramebuffer *lookUpBuffer; // ivar: _lookUpBuffer
@property (retain, nonatomic) TDreamFramebuffer *outputBufferAndTexture; // ivar: _outputBufferAndTexture


-(BOOL)lookupFailedToLoad;
-(id)init;
-(unsigned int)getBufferFromArray:(int)arg0 withSize:(struct CGSize )arg1 ;
-(unsigned int)getOutputBufferNameWithIPImage:(struct IPImage )arg0 ;
-(unsigned int)getOutputBufferNamer;
-(unsigned int)getTextureNameFromArray:(int)arg0 ;
-(void)addImageBufferToArray:(int)arg0 ipImage:(struct IPImage )arg1 ;
-(void)clearFrameBuffers;
-(void)dealloc;
-(void)deleteAllFramebuffers;
-(void)deleteLargeFramebuffers;
-(void)deleteSmallFramebuffers;
-(void)newLookUp:(id)arg0 ;


@end


#endif