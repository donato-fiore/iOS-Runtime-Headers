// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SACALLTREE_H
#define SACALLTREE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface SACallTree : NSObject

@property (readonly) NSArray *rootFrames;
@property (readonly) NSArray *rootObjects; // ivar: _rootObjects


-(id)initWithRootObjects:(id)arg0 ;
-(void)enumerateCallTreeFrames:(id)arg0 ;


@end


#endif