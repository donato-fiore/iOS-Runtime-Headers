// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGCAPTUREPIPELINE_H
#define FIGCAPTUREPIPELINE_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "BWGraph.h"

@interface FigCapturePipeline : NSObject

@property (readonly, nonatomic) BWGraph *graph; // ivar: _graph
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSArray *nodes; // ivar: _nodes


-(BOOL)addNode:(id)arg0 error:(*id)arg1 ;
-(id)initWithGraph:(id)arg0 name:(id)arg1 ;
-(void)dealloc;


@end


#endif