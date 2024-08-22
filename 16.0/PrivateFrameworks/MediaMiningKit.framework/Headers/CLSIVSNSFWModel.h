// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSIVSNSFWMODEL_H
#define CLSIVSNSFWMODEL_H

@class NSString;
@protocol CLSClassificationBasedSignalModel;

#import <Foundation/Foundation.h>

#import "CLSSignalNode.h"

@interface CLSIVSNSFWModel : NSObject <CLSClassificationBasedSignalModel>

 {
    CLSSignalNode *_anyNode;
    CLSSignalNode *_femaleBreastNode;
    CLSSignalNode *_maleBreastNode;
    CLSSignalNode *_buttocksNode;
    CLSSignalNode *_explicitNode;
    CLSSignalNode *_femaleGenitalsNode;
    CLSSignalNode *_maleGenitalsNode;
    CLSSignalNode *_noneNode;
    CLSSignalNode *_underwearNode;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
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
-(void)setupVersion61;
-(void)setupVersion76;


@end


#endif