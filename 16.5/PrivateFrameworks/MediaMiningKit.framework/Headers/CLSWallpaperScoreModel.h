// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSWALLPAPERSCOREMODEL_H
#define CLSWALLPAPERSCOREMODEL_H

@class NSString;
@protocol CLSSignalModel;

#import <Foundation/Foundation.h>

#import "CLSSignalNode.h"

@interface CLSWallpaperScoreModel : NSObject <CLSSignalModel>



@property (readonly) CLSSignalNode *catNode; // ivar: _catNode
@property (readonly) CLSSignalNode *cityscapeNode; // ivar: _cityscapeNode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) CLSSignalNode *dogNode; // ivar: _dogNode
@property (readonly) NSUInteger hash;
@property (readonly) CLSSignalNode *landscapeNode; // ivar: _landscapeNode
@property (readonly) CLSSignalNode *peopleNode; // ivar: _peopleNode
@property (readonly) CLSSignalNode *petNode; // ivar: _petNode
@property (readonly) Class superclass;
@property (readonly) NSUInteger version; // ivar: _version


+(NSUInteger)baseSceneAnalysisVersionWithSceneAnalysisVersion:(NSUInteger)arg0 ;
+(NSUInteger)currentAnalyzerVersion;
+(NSUInteger)latestVersion;
+(id)name;
-(id)initForTesting;
-(id)initWithSceneAnalysisVersion:(NSUInteger)arg0 ;
-(void)setupVersion77;
-(void)setupVersion88;


@end


#endif