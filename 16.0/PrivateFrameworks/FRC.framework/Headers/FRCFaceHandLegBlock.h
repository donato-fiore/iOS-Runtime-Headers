// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FRCFACEHANDLEGBLOCK_H
#define FRCFACEHANDLEGBLOCK_H


#import <Foundation/Foundation.h>


@interface FRCFaceHandLegBlock : NSObject

@property (nonatomic) NSUInteger category; // ivar: _category
@property (nonatomic) NSUInteger numberOfBlocks; // ivar: _numberOfBlocks
@property (nonatomic) CGRect rect; // ivar: _rect


+(id)faceHandLegBlockWithRect:(struct CGRect )arg0 numberOfBlocks:(NSUInteger)arg1 category:(NSUInteger)arg2 ;


@end


#endif