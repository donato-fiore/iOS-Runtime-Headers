// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CATCOMMONAPI_H
#define CATCOMMONAPI_H


#import <Foundation/Foundation.h>


@interface CATCommonApi : NSObject



+(BOOL)UpdatesEnabled:(int)arg0 ;
+(id)DEResultToCATResult:(id)arg0 catId:(id)arg1 ;
+(void)ConfigureDEExecutor:(id)arg0 parameters:(id)arg1 globalParameters:(id)arg2 catId:(id)arg3 callback:(id)arg4 options:(int)arg5 ;


@end


#endif