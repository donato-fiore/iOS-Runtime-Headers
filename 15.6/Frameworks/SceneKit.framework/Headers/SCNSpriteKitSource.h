// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCNSPRITEKITSOURCE_H
#define SCNSPRITEKITSOURCE_H

@class SKScene;


#import "SCNImageSource.h"

@interface SCNSpriteKitSource : SCNImageSource

@property (retain, nonatomic) SKScene *scene; // ivar: _scene


-(BOOL)isOpaque;
-(id)textureSource;
-(void)dealloc;


@end


#endif