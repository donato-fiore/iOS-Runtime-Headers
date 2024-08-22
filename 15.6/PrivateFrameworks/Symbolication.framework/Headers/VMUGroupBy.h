// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VMUGROUPBY_H
#define VMUGROUPBY_H


#import <Foundation/Foundation.h>

#import "VMUProcessObjectGraph.h"

@interface VMUGroupBy : NSObject

@property (readonly) VMUProcessObjectGraph *graph; // ivar: _graph


-(id)initWithGraph:(id)arg0 ;
-(id)typeNameForNode:(unsigned int)arg0 ;
-(void)enumerateGroups:(*void)arg0 withBlock:(id)arg1 ;


@end


#endif