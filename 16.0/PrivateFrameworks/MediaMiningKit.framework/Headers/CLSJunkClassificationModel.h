// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSJUNKCLASSIFICATIONMODEL_H
#define CLSJUNKCLASSIFICATIONMODEL_H

@class NSString;
@protocol CLSClassificationBasedSignalModel;

#import <Foundation/Foundation.h>

#import "CLSSignalNode.h"

@interface CLSJunkClassificationModel : NSObject <CLSClassificationBasedSignalModel>



@property (readonly) CLSSignalNode *badFramingNode; // ivar: _badFramingNode
@property (readonly) CLSSignalNode *badLightingNode; // ivar: _badLightingNode
@property (readonly) CLSSignalNode *blurryNode; // ivar: _blurryNode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) CLSSignalNode *foodOrDrinkNode; // ivar: _foodOrDrinkNode
@property (readonly) NSUInteger hash;
@property (readonly) CLSSignalNode *legacyNode; // ivar: _legacyNode
@property (readonly) CLSSignalNode *medicalReferenceNode; // ivar: _medicalReferenceNode
@property (readonly) CLSSignalNode *negativeInternalNode; // ivar: _negativeInternalNode
@property (readonly) CLSSignalNode *negativeNode; // ivar: _negativeNode
@property (readonly) CLSSignalNode *nonMemorableNode; // ivar: _nonMemorableNode
@property (readonly) CLSSignalNode *otherNode; // ivar: _otherNode
@property (readonly) CLSSignalNode *poorQualityNode; // ivar: _poorQualityNode
@property (readonly) CLSSignalNode *receiptOrDocumentNode; // ivar: _receiptOrDocumentNode
@property (readonly) CLSSignalNode *repairReferenceNode; // ivar: _repairReferenceNode
@property (readonly) CLSSignalNode *screenshotNode; // ivar: _screenshotNode
@property (readonly) CLSSignalNode *shoppingReferenceNode; // ivar: _shoppingReferenceNode
@property (readonly) Class superclass;
@property (readonly) CLSSignalNode *textDocumentNode; // ivar: _textDocumentNode
@property (readonly) CLSSignalNode *tragicFailureInternalNode; // ivar: _tragicFailureInternalNode
@property (readonly) CLSSignalNode *tragicFailureNode; // ivar: _tragicFailureNode
@property (readonly) CLSSignalNode *utilityReferenceNode; // ivar: _utilityReferenceNode
@property (readonly) NSUInteger version; // ivar: _version


+(NSUInteger)baseSceneAnalysisVersionWithSceneAnalysisVersion:(NSUInteger)arg0 ;
+(NSUInteger)currentAnalyzerVersion;
+(NSUInteger)latestVersion;
+(id)name;
-(BOOL)isResponsibleForSignalIdentifier:(NSUInteger)arg0 ;
-(id)initForTesting;
-(id)initWithSceneAnalysisVersion:(NSUInteger)arg0 ;
-(id)modelInfo;
-(id)nodeForSignalIdentifier:(NSUInteger)arg0 ;
-(void)processSignals:(id)arg0 intoProcessedSignals:(id)arg1 ;
-(void)setupVersion31;
-(void)setupVersion32;
-(void)setupVersion40;
-(void)setupVersion81;
-(void)setupVersion86;


@end


#endif