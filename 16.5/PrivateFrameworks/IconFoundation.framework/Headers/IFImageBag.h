// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IFIMAGEBAG_H
#define IFIMAGEBAG_H

@class NSArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface IFImageBag : NSObject

@property (readonly, copy) NSArray *images;
@property (retain) NSMutableDictionary *imagesByScale; // ivar: _imagesByScale
@property os_unfair_lock_s lock; // ivar: _lock


+(id)imageBagWithResourcesNamed:(id)arg0 directory:(id)arg1 ;
+(id)imageBagWithResourcesNamed:(id)arg0 fromBundle:(id)arg1 ;
+(id)imageBagWithResourcesNamed:(id)arg0 fromBundle:(id)arg1 subdirectory:(id)arg2 ;
+(id)imageBagWithResourcesNames:(id)arg0 fromBundle:(id)arg1 ;
-(id)debugDescription;
-(id)imageForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(id)imagesForScale:(CGFloat)arg0 ;
-(id)init;
-(id)initWithImages:(id)arg0 ;
-(void)insertImage:(id)arg0 ;


@end


#endif