// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SARECIPE_H
#define SARECIPE_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface SARecipe : NSObject {
    NSMutableArray *_states;
}


@property (readonly) NSUInteger identifier; // ivar: _identifier
@property (readonly) NSArray *states;




@end


#endif