// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUTILELAYER_H
#define NUTILELAYER_H

@class CALayer;
@protocol NUPurgeableSurfaceImage;



@interface NUTileLayer : CALayer

@property (readonly) NSObject<NUPurgeableSurfaceImage> *image; // ivar: _image
@property (readonly) ? imageRect; // ivar: _imageRect


-(id)initWithImage:(id)arg0 tile:(id)arg1 ;
-(void)dealloc;


@end


#endif