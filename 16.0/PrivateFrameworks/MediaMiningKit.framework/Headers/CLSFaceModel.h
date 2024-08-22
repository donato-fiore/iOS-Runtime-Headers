// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSFACEMODEL_H
#define CLSFACEMODEL_H

@class NSString;
@protocol CLSSignalModel;

#import <Foundation/Foundation.h>

#import "CLSSignalNode.h"

@interface CLSFaceModel : NSObject <CLSSignalModel>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) CLSSignalNode *qualityNode; // ivar: _qualityNode
@property (readonly) Class superclass;
@property (readonly) NSUInteger version; // ivar: _version


+(NSUInteger)baseFaceAnalysisVersionWithFaceAnalysisVersion:(NSUInteger)arg0 ;
+(NSUInteger)currentAnalyzerVersion;
+(NSUInteger)latestVersion;
+(id)name;
-(id)initForTesting;
-(id)initWithFaceAnalysisVersion:(NSUInteger)arg0 ;
-(void)setupVersion1;


@end


#endif