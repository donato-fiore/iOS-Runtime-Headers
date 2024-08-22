// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNRENDERTARGET_H
#define SCNRENDERTARGET_H

@class CIImage, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface SCNRenderTarget : NSObject {
    ? _description;
    ? _size;
    NSUInteger _arrayLength;
    CIImage *_ciImage;
    NSArray *_sliceTextures;
}


@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSInteger referenceCount; // ivar: _referenceCount
@property (readonly, nonatomic) unsigned char renderBufferFormat;
@property (retain, nonatomic) id *texture; // ivar: _texture
@property (nonatomic) NSInteger timeStamp; // ivar: _timeStamp
@property (readonly, nonatomic) BOOL viewportDependant;


-(BOOL)matchesDescription:(struct ? *)arg0 size:(NSUInteger)arg1 arrayLength;
-(id)ciImage;
-(id)description;
-(id)initWithDescription:(struct ? *)arg0 size:(NSUInteger)arg1 arrayLength;
-(id)textureForSliceIndex:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif