// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VMUGRAPHENUMERATOR_H
#define VMUGRAPHENUMERATOR_H


#import <Foundation/Foundation.h>

#import "VMUProcessObjectGraph.h"

@interface VMUGraphEnumerator : NSObject

@property (readonly) VMUProcessObjectGraph *graph; // ivar: _graph


-(*unsigned int)buildReversePostOrderWithRoots:(*void)arg0 ;
-(*void)destinationsOfGroup:(id)arg0 ;
-(*void)destinationsOfNodes:(*void)arg0 ;
-(id)initWithGraph:(id)arg0 ;
-(id)statusDisplayDescription;
-(void)enumerateDestinationsOfGroup:(id)arg0 groupedBy:(id)arg1 withBlock:(id)arg2 ;
-(void)enumerateDestinationsOfNode:(unsigned int)arg0 groupedBy:(id)arg1 withBlock:(id)arg2 ;
-(void)enumerateDestinationsOfNodes:(*void)arg0 groupedBy:(id)arg1 withBlock:(id)arg2 ;
-(void)enumerateEdgesOfNode:(unsigned int)arg0 withBlock:(id)arg1 ;


@end


#endif