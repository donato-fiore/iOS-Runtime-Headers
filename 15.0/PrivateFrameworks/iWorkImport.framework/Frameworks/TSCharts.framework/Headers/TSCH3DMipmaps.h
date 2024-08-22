// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DMIPMAPS_H
#define TSCH3DMIPMAPS_H

@class NSData;

#import <Foundation/Foundation.h>


@interface TSCH3DMipmaps : NSObject

@property (readonly, nonatomic) NSUInteger components; // ivar: _components
@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) int height; // ivar: _height
@property (readonly, nonatomic) int width; // ivar: _width


+(id)mipmapNameFromImageName:(id)arg0 ;
+(id)mipmapsFromData:(id)arg0 ;
+(id)mipmapsWithWidth:(int)arg0 height:(int)arg1 components:(NSUInteger)arg2 mipmapData:(id)arg3 ;
+(struct CGSize )mipmapSizeForTexturableSize:(struct CGSize )arg0 ;
+(struct CGSize )optimizedMipmapLevel0Size;
-(BOOL)valid;
-(BOOL)writeToFile:(id)arg0 ;
-(id)description;
-(id)initFromData:(id)arg0 ;
-(id)initWithWidth:(int)arg0 height:(int)arg1 components:(NSUInteger)arg2 mipmapData:(id)arg3 ;


@end


#endif