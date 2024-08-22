// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXGALLERYCOMPONENT_H
#define SXGALLERYCOMPONENT_H

@class NSString;


#import "SXComponent.h"
#import "SXJSONArray.h"

@interface SXGalleryComponent : SXComponent

@property (readonly, nonatomic) NSString *galleryType;
@property (readonly, nonatomic) SXJSONArray *items;


+(id)typeString;
+(id)valueClassBlockForPropertyWithName:(SEL)arg0 ;
-(NSUInteger)traits;


@end


#endif