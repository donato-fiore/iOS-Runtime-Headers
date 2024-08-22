// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSMEDIAPREANALYSISMODEL_H
#define CLSMEDIAPREANALYSISMODEL_H

@class NSString;
@protocol CLSSignalModel;

#import <Foundation/Foundation.h>

#import "CLSSignalNode.h"

@interface CLSMediaPreAnalysisModel : NSObject <CLSSignalModel>

 {
    CLSSignalNode *_probableRotationDirection0DegreesConfidenceNode;
    CLSSignalNode *_probableRotationDirection90DegreesConfidenceNode;
    CLSSignalNode *_probableRotationDirection180DegreesConfidenceNode;
    CLSSignalNode *_probableRotationDirection270DegreesConfidenceNode;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) CLSSignalNode *exposureNode; // ivar: _exposureNode
@property (readonly) NSUInteger hash;
@property (readonly) CLSSignalNode *sharpnessNode; // ivar: _sharpnessNode
@property (readonly) Class superclass;
@property (readonly) NSUInteger version; // ivar: _version


+(NSUInteger)baseSceneAnalysisVersionWithSceneAnalysisVersion:(NSUInteger)arg0 ;
+(NSUInteger)currentAnalyzerVersion;
+(NSUInteger)latestVersion;
+(id)name;
-(BOOL)isWronglyRotatedFromMediaAnalysisProperties:(id)arg0 ;
-(id)initForTesting;
-(id)initWithSceneAnalysisVersion:(NSUInteger)arg0 ;
-(void)setupVersion31;
-(void)setupVersion45;
-(void)setupVersion57;


@end


#endif