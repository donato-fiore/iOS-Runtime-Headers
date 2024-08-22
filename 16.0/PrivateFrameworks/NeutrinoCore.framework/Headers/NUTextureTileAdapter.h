// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUTEXTURETILEADAPTER_H
#define NUTEXTURETILEADAPTER_H

@class NSString;
@protocol NUTextureTile, MTLTexture;

#import <Foundation/Foundation.h>


@interface NUTextureTileAdapter : NSObject <NUTextureTile>



@property (readonly, nonatomic) ? contentRect; // ivar: _contentRect
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) ? frameRect; // ivar: _frameRect
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<MTLTexture> *texture; // ivar: _texture


-(BOOL)decrementUseCount;
-(BOOL)isInUse;
-(BOOL)isShared;
-(id)_surface;
-(id)init;
-(id)initWithFrameRect:(struct ? )arg0 contentRect:(struct ? )arg1 texture:(id)arg2 ;
-(int)useCount;
-(void)incrementUseCount;


@end


#endif