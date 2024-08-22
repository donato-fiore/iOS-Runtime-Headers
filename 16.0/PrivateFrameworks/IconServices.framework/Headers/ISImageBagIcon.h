// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISIMAGEBAGICON_H
#define ISIMAGEBAGICON_H

@class NSArray;


#import "ISIcon.h"
#import "ISImageCache.h"

@interface ISImageBagIcon : ISIcon {
    NSArray *_decorations;
}


@property (retain) ISImageCache *imageCache; // ivar: _imageCache
@property (readonly) NSArray *images; // ivar: _images


-(id)_generateImageWithDescriptor:(id)arg0 ;
-(id)decorations;
-(id)imageForImageDescriptor:(id)arg0 ;
-(id)initWithImageBag:(id)arg0 ;
-(id)initWithImages:(id)arg0 ;
-(id)initWithImages:(id)arg0 decorations:(id)arg1 ;
-(void)_prepareImagesForImageDescriptors:(id)arg0 ;
-(void)getImageForImageDescriptor:(id)arg0 completion:(id)arg1 ;


@end


#endif