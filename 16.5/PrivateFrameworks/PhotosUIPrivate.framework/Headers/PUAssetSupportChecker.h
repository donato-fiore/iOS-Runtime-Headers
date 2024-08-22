// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUASSETSUPPORTCHECKER_H
#define PUASSETSUPPORTCHECKER_H


#import <Foundation/Foundation.h>


@interface PUAssetSupportChecker : NSObject



+(BOOL)isSupportedAsset:(id)arg0 type:(NSInteger)arg1 ;
+(void)_alertTitleAndMessageForAsset:(id)arg0 type:(NSInteger)arg1 title:(*id)arg2 message:(*id)arg3 ;
// +(void)_presentAlertWithTitle:(id)arg0 message:(id)arg1 knowledgeBaseURL:(id)arg2 alertControllerPresenter:(id)arg3 completionHandler:(unk)arg4  ;
// +(void)checkIsSupportedAndPresentAlertForAsset:(id)arg0 type:(NSInteger)arg1 alertControllerPresenter:(id)arg2 completionHandler:(unk)arg3  ;
+(void)checkIsSupportedAsset:(id)arg0 type:(NSInteger)arg1 completionHandler:(id)arg2 ;
+(void)checkIsSupportedAsset:(id)arg0 type:(NSInteger)arg1 completionHandlerWithReason:(id)arg2 ;
// +(void)presentAlertForAsset:(id)arg0 type:(NSInteger)arg1 alertControllerPresenter:(id)arg2 completionHandler:(unk)arg3  ;
// +(void)presentAlertWithTitle:(id)arg0 message:(id)arg1 uti:(id)arg2 codecName:(id)arg3 alertControllerPresenter:(id)arg4 completionHandler:(unk)arg5  ;


@end


#endif