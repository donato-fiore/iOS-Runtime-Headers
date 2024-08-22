// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMIBAREMETALTEXTURE_H
#define CMIBAREMETALTEXTURE_H

@class MTLTextureDescriptor;
@protocol MTLTexture;

#import <Foundation/Foundation.h>


@interface CMIBareMetalTexture : NSObject {
    MTLTextureDescriptor *_textureDescriptor;
    unsigned int _osType;
    unsigned int _stride;
    unsigned int _dataOffset;
}


@property (readonly, nonatomic) NSObject<MTLTexture> *texture; // ivar: _texture


-(BOOL)saveToFile:(id)arg0 ;
-(BOOL)saveToFile:(id)arg0 withBMTLversion:(unsigned int)arg1 ;
-(BOOL)updateTextureWithData:(id)arg0 ;
-(BOOL)updateTextureWithFile:(id)arg0 ;
-(id)initWithData:(id)arg0 device:(id)arg1 ;
-(id)initWithFile:(id)arg0 device:(id)arg1 ;
-(id)initWithTexture:(id)arg0 ;
-(int)updateTextureContent:(id)arg0 ;
-(int)updateTextureDescriptor:(id)arg0 ;


@end


#endif