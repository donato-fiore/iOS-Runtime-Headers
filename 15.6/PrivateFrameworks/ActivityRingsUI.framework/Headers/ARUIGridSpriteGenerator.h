// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARUIGRIDSPRITEGENERATOR_H
#define ARUIGRIDSPRITEGENERATOR_H


#import <Foundation/Foundation.h>


@interface ARUIGridSpriteGenerator : NSObject {
    NSUInteger _spriteCount;
    NSUInteger _framesPerSprite;
    NSUInteger _columnsPerSprite;
    NSUInteger _rowsPerSprite;
}




+(id)generatorWithSpriteCount:(NSUInteger)arg0 framesPerSprite:(NSUInteger)arg1 rowsPerSprite:(NSUInteger)arg2 columnsPerSprite:(NSUInteger)arg3 ;
-(id)frameSize;
-(id)generateSprites;
-(id)initWithSpriteCount:(NSUInteger)arg0 framesPerSprite:(NSUInteger)arg1 rowsPerSprite:(NSUInteger)arg2 columnsPerSprite:(NSUInteger)arg3 ;
-(id)originForSpriteAtIndex;
-(id)spriteAtIndex:(NSUInteger)arg0 ;


@end


#endif