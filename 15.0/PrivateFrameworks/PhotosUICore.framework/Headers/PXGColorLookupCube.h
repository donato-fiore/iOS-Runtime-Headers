// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXGCOLORLOOKUPCUBE_H
#define PXGCOLORLOOKUPCUBE_H

@class NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXGColorLookupCube : NSObject <NSCopying>



@property ? center;
@property (nonatomic) NSInteger edgeSize; // ivar: _edgeSize
@property (readonly, nonatomic) BOOL shouldCache; // ivar: _shouldCache
@property (readonly, nonatomic) NSData *textureData;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createTextureWithDevice:(id)arg0 ;


@end


#endif