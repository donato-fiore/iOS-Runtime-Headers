// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXMMOBILEASSETEVALUATIONNODE_H
#define AXMMOBILEASSETEVALUATIONNODE_H

@class NSArray, NSURL;


#import "AXMEvaluationNode.h"

@interface AXMMobileAssetEvaluationNode : AXMEvaluationNode {
    NSUInteger _formatVersion;
}


@property (readonly, nonatomic) NSArray *mlModels; // ivar: _mlModels
@property (readonly, nonatomic) NSURL *mobileAssetBaseURL; // ivar: _mobileAssetBaseURL


-(NSUInteger)formatVersion;
-(NSUInteger)maxSupportedFormatVersion;
-(NSUInteger)minSupportedFormatVersion;
-(id)contentVersionKey;
-(id)initWithIdentifier:(id)arg0 ;
-(id)mlModelClasses;
-(id)mobileAssetType;
-(id)modelResourceNames;
-(id)modelURLs;
-(void)_downloadAssetsIfNecessary;
-(void)evaluate:(id)arg0 metrics:(id)arg1 ;
-(void)setModelURLs:(id)arg0 ;


@end


#endif