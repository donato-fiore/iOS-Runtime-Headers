// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAPATHS_H
#define MAPATHS_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface MAPaths : NSObject {
    NSMutableArray *_paths;
}




+(id)paths;
+(id)pathsWithPaths:(id)arg0 ;
-(NSUInteger)count;
-(id)description;
-(id)graphRepresentationWithStrictNodes:(BOOL)arg0 strictEdges:(BOOL)arg1 ;
-(id)init;
-(id)pathAtIndex:(NSUInteger)arg0 ;
-(id)uniqueEdgesForLabel:(id)arg0 ;
-(id)uniqueNodesForLabel:(id)arg0 ;
-(void)addPath:(id)arg0 ;
-(void)enumerateWithBlock:(id)arg0 ;
-(void)removeAllPaths;
-(void)setPaths:(id)arg0 ;


@end


#endif