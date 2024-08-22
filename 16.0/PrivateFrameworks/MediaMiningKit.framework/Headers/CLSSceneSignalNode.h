// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSSCENESIGNALNODE_H
#define CLSSCENESIGNALNODE_H



#import "CLSSignalNode.h"

@interface CLSSceneSignalNode : CLSSignalNode

@property (nonatomic) CGFloat graphHighPrecisionThreshold; // ivar: _graphHighPrecisionThreshold
@property (nonatomic) CGFloat graphHighRecallThreshold; // ivar: _graphHighRecallThreshold
@property (nonatomic) CGFloat searchThreshold; // ivar: _searchThreshold


-(id)initWithTaxonomyNode:(id)arg0 ;


@end


#endif