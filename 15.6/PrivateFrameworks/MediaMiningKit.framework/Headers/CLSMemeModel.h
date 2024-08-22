// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSMEMEMODEL_H
#define CLSMEMEMODEL_H

@class NSString;
@protocol CLSClassificationBasedSignalModel;

#import <Foundation/Foundation.h>

#import "CLSSignalNode.h"

@interface CLSMemeModel : NSObject <CLSClassificationBasedSignalModel>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) CLSSignalNode *documentNode; // ivar: _documentNode
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isEnabled;
@property (readonly) CLSSignalNode *memeScreenshotEtcNode; // ivar: _memeScreenshotEtcNode
@property (readonly) NSUInteger minimumSupportedVersion; // ivar: _minimumSupportedVersion
@property (readonly) CLSSignalNode *negativeNode; // ivar: _negativeNode
@property (readonly) Class superclass;
@property (readonly) NSUInteger version; // ivar: _version


+(NSUInteger)currentAnalyzerVersion;
+(NSUInteger)latestVersion;
+(id)modelWithVersion:(NSUInteger)arg0 ;
+(id)name;
-(BOOL)isMemeFromSceneClassifications:(id)arg0 ;
-(BOOL)isResponsibleForSignalIdentifier:(NSUInteger)arg0 ;
-(id)initWithVersion:(NSUInteger)arg0 ;
-(id)modelInfo;
-(id)nodeForSignalIdentifier:(NSUInteger)arg0 ;
-(void)processSignals:(id)arg0 intoProcessedSignals:(id)arg1 ;
-(void)setupVersion55;
-(void)setupVersion59;
-(void)setupVersion62;


@end


#endif