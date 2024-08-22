// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSNNCONCATENATIONNODE_H
#define MPSNNCONCATENATIONNODE_H



#import "MPSNNFilterNode.h"

@interface MPSNNConcatenationNode : MPSNNFilterNode



+(id)nodeWithSource:(id)arg0 ;
+(id)nodeWithSources:(id)arg0 ;
-(*void)newFilterNode;
-(Class)gradientClass;
-(id)gradientFiltersWithSources:(id)arg0 ;
-(id)initWithSource:(id)arg0 ;
-(id)initWithSources:(id)arg0 ;


@end


#endif