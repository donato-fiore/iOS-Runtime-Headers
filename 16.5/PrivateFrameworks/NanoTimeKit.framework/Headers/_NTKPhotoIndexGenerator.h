// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NTKPHOTOINDEXGENERATOR_H
#define _NTKPHOTOINDEXGENERATOR_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface _NTKPhotoIndexGenerator : NSObject {
    NSInteger _n;
    NSInteger _count;
    NSInteger _prevIndex;
    NSInteger _step;
    NSArray *_stepSizes;
}




-(NSInteger)nextRandom;
-(NSInteger)nextSequential;
-(id)initWithSize:(NSInteger)arg0 ;
-(void)reset;
-(void)setIndex:(NSInteger)arg0 ;


@end


#endif