// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSNNFILTERNODE_H
#define MPSNNFILTERNODE_H

@class NSMutableArray, NSString, NSArray;
@protocol MPSNNPadding;

#import <Foundation/Foundation.h>

#import "MPSNNImageNode.h"
#import "MPSNNStateNode.h"

@interface MPSNNFilterNode : NSObject {
    NSMutableArray *_sourceImages;
    NSMutableArray *_sourceStates;
    NSMutableArray *_resultStates;
}


@property (copy) NSString *label; // ivar: _label
@property (retain, nonatomic) NSObject<MPSNNPadding> *paddingPolicy; // ivar: _paddingPolicy
@property (readonly, nonatomic) MPSNNImageNode *resultImage; // ivar: _resultImage
@property (readonly, nonatomic) MPSNNStateNode *resultState;
@property (readonly, nonatomic) NSArray *resultStates;


-(Class)gradientClass;
-(id)debugDescription;
-(id)debugQuickLookObject;
-(id)gradientFilterWithSource:(id)arg0 ;
-(id)gradientFilterWithSources:(id)arg0 ;
-(id)gradientFiltersWithSource:(id)arg0 ;
-(id)gradientFiltersWithSources:(id)arg0 ;
-(id)initWithSourceImages:(id)arg0 sourceStates:(id)arg1 paddingPolicy:(id)arg2 ;
-(id)sourceImages;
-(id)sourceStates;
-(id)trainingGraphWithSourceGradient:(id)arg0 nodeHandler:(id)arg1 ;
-(struct FilterGraphNode *)newFilterNode;
-(void)dealloc;


@end


#endif