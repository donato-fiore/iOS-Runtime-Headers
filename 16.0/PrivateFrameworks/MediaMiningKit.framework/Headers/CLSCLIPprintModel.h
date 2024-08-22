// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSCLIPPRINTMODEL_H
#define CLSCLIPPRINTMODEL_H

@class NSString;
@protocol CLSSignalModel;

#import <Foundation/Foundation.h>


@interface CLSCLIPprintModel : NSObject <CLSSignalModel>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) NSUInteger version; // ivar: _version


+(NSUInteger)baseSceneAnalysisVersionWithSceneAnalysisVersion:(NSUInteger)arg0 ;
+(NSUInteger)currentAnalyzerVersion;
+(NSUInteger)latestVersion;
+(id)name;
+(id)requiredCVNLPCLIPModelName;
-(id)initForTesting;
-(id)initWithSceneAnalysisVersion:(NSUInteger)arg0 ;
-(void)setupVersion84;


@end


#endif