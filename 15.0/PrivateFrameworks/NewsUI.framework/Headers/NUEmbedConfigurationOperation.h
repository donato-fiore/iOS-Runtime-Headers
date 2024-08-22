// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUEMBEDCONFIGURATIONOPERATION_H
#define NUEMBEDCONFIGURATIONOPERATION_H

@class FCOperation, FCFlintResourceManager;
@protocol FCNewsAppConfigurationManager;


#import "NUEmbedConfigurationOperationResult.h"

@interface NUEmbedConfigurationOperation : FCOperation

@property (retain, nonatomic) NSObject<FCNewsAppConfigurationManager> *appConfigurationManager; // ivar: _appConfigurationManager
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (retain, nonatomic) FCFlintResourceManager *flintResourceManager; // ivar: _flintResourceManager
@property (retain, nonatomic) NUEmbedConfigurationOperationResult *result; // ivar: _result


-(id)initWithAppConfigManager:(id)arg0 flintResourceManager:(id)arg1 ;
-(void)operationWillFinishWithError:(id)arg0 ;
-(void)performOperation;


@end


#endif