// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CATDIALOG_H
#define CATDIALOG_H


#import <Foundation/Foundation.h>


@interface CATDialog : NSObject



+(id)execute:(id)arg0 templateDir:(id)arg1 catId:(id)arg2 parameters:(id)arg3 globals:(id)arg4 callback:(id)arg5 options:(int)arg6 ;
+(void)execute:(id)arg0 catId:(id)arg1 parameters:(id)arg2 globals:(id)arg3 callback:(id)arg4 completion:(id)arg5 ;
+(void)execute:(id)arg0 catId:(id)arg1 parameters:(id)arg2 globals:(id)arg3 callback:(id)arg4 options:(int)arg5 completion:(id)arg6 ;
+(void)execute:(id)arg0 catId:(id)arg1 parameters:(id)arg2 globals:(id)arg3 completion:(id)arg4 ;
+(void)execute:(id)arg0 paramsXML:(id)arg1 localeXML:(id)arg2 parameters:(id)arg3 globals:(id)arg4 callback:(id)arg5 options:(int)arg6 completion:(id)arg7 ;
+(void)execute:(id)arg0 templateDir:(id)arg1 catId:(id)arg2 parameters:(id)arg3 globals:(id)arg4 callback:(id)arg5 options:(int)arg6 completion:(id)arg7 ;
+(void)preload;


@end


#endif