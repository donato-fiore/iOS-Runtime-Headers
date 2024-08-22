// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLFUNCTIONSTITCHINGGRAPH_H
#define MTLFUNCTIONSTITCHINGGRAPH_H

@class NSArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MTLFunctionStitchingFunctionNode.h"

@interface MTLFunctionStitchingGraph : NSObject <NSCopying>



@property (copy, nonatomic) NSArray *attributes; // ivar: _attributes
@property (copy, nonatomic) NSString *functionName; // ivar: _functionName
@property (copy, nonatomic) NSArray *nodes; // ivar: _nodes
@property (copy, nonatomic) MTLFunctionStitchingFunctionNode *outputNode; // ivar: _outputNode


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithFunctionName:(id)arg0 nodes:(id)arg1 outputNode:(id)arg2 attributes:(id)arg3 ;
-(void)dealloc;


@end


#endif