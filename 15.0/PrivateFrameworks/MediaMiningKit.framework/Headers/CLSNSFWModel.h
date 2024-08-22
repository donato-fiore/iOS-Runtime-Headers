// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSNSFWMODEL_H
#define CLSNSFWMODEL_H

@class NSString;
@protocol CLSClassificationBasedSignalModel;

#import <Foundation/Foundation.h>

#import "CLSSignalNode.h"

@interface CLSNSFWModel : NSObject <CLSClassificationBasedSignalModel>

 {
    CLSSignalNode *_noneNode;
    CLSSignalNode *_generalNode;
    CLSSignalNode *_explicitNode;
    CLSSignalNode *_brassiereNode;
    CLSSignalNode *_femaleBreastNode;
    CLSSignalNode *_maleBreastNode;
    CLSSignalNode *_buttocksNode;
    CLSSignalNode *_femaleGenitalsNode;
    CLSSignalNode *_maleGenitalsNode;
    CLSSignalNode *_underwearNode;
    CLSSignalNode *_maleUnderwearNode;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger minimumSupportedVersion; // ivar: _minimumSupportedVersion
@property (readonly) Class superclass;
@property (readonly) NSUInteger version; // ivar: _version


+(NSUInteger)currentAnalyzerVersion;
+(NSUInteger)latestVersion;
+(id)modelWithVersion:(NSUInteger)arg0 ;
+(id)name;
-(BOOL)isResponsibleForSignalIdentifier:(NSUInteger)arg0 ;
-(id)initWithVersion:(NSUInteger)arg0 ;
-(id)modelInfo;
-(id)nodeForSignalIdentifier:(NSUInteger)arg0 ;
-(void)processSignals:(id)arg0 intoProcessedSignals:(id)arg1 ;
-(void)setupVersion32;
-(void)setupVersion33;
-(void)setupVersion50_4;


@end


#endif