// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARUISPRITESHEETFACTORY_H
#define ARUISPRITESHEETFACTORY_H


#import <Foundation/Foundation.h>

#import "ARUISpriteTexture.h"

@interface ARUISpriteSheetFactory : NSObject {
    ARUISpriteTexture *_defaultSpriteTexture;
    ARUISpriteTexture *_wheelchairSpriteTexture;
    ARUISpriteTexture *_sharingSpriteTexture;
    ARUISpriteTexture *_wheelchairSharingSpriteTexture;
}




+(id)defaultSpriteSheet;
+(id)sharedInstance;
+(id)sharingSpriteSheet;
+(id)spriteSheetForRingType:(NSInteger)arg0 ;
+(id)wheelchairSharingSpriteSheet;
+(id)wheelchairSpriteSheet;
+(id)wheelchairSpriteSheetForRingType:(NSInteger)arg0 ;
-(id)_defaultSpriteImageFallback;
-(id)_defaultWheelchairSpriteImageFallback;
-(id)defaultSpriteTexture;
-(id)sharingSpriteTexture;
-(id)wheelchairSharingSpriteTexture;
-(id)wheelchairSpriteTexture;


@end


#endif