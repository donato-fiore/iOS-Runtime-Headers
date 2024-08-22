// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUCOMFORTSOUNDSSHUFFLER_H
#define HUCOMFORTSOUNDSSHUFFLER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface HUComfortSoundsShuffler : NSObject {
    NSUInteger _index;
    NSMutableArray *_array;
}




+(id)shufflerWithArray:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithArray:(id)arg0 ;
-(id)nextObject;
-(void)shuffle;


@end


#endif