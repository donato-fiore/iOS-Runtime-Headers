// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TDTEXTUREMIPLEVEL_H
#define TDTEXTUREMIPLEVEL_H

@class NSManagedObject;


#import "TDTextureFace.h"
#import "TDTextureRenditionSpec.h"
#import "TDTextureImageRenditionSpec.h"

@interface TDTextureMipLevel : NSManagedObject

@property (retain, nonatomic) TDTextureFace *face;
@property (nonatomic) short level;
@property (retain, nonatomic) TDTextureRenditionSpec *texture;
@property (retain, nonatomic) TDTextureImageRenditionSpec *textureImage;




@end


#endif