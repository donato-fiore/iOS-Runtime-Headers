// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARUISPRITESHEET_H
#define ARUISPRITESHEET_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "ARUISpriteTexture.h"

@interface ARUISpriteSheet : NSObject <NSCopying>



@property (readonly, nonatomic) NSArray *sprites; // ivar: _sprites
@property (readonly, nonatomic) ARUISpriteTexture *texture; // ivar: _texture


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithSpriteSheet:(id)arg0 ;
-(id)initWithTexture:(id)arg0 sprites:(id)arg1 ;


@end


#endif