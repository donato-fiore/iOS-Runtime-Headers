// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CATCOMMONAPI_H
#define CATCOMMONAPI_H


#import <Foundation/Foundation.h>


@interface CATCommonApi : NSObject



+(BOOL)UpdatesEnabled:(int)arg0 ;
+(id)CreateDEExecutor:(id)arg0 templateDir:(id)arg1 catId:(id)arg2 paramsXML:(id)arg3 localeXML:(id)arg4 parameters:(id)arg5 globalContext:(id)arg6 callback:(id)arg7 options:(int)arg8 ;
+(id)DEResultToCATResult:(id)arg0 catId:(id)arg1 ;
+(id)DEResultToDialogExecutionResult:(id)arg0 catId:(id)arg1 ;
+(id)NSErrorFromString:(id)arg0 errorCode:(id)arg1 ;
+(void)ConfigureDEExecutor:(id)arg0 parameters:(id)arg1 globalParameters:(id)arg2 catId:(id)arg3 callback:(id)arg4 options:(int)arg5 ;


@end


#endif