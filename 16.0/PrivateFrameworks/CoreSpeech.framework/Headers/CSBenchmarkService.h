// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSBENCHMARKSERVICE_H
#define CSBENCHMARKSERVICE_H


#import <Foundation/Foundation.h>


@interface CSBenchmarkService : NSObject



+(id)createBenchamrkXPCConnection;
+(void)pingpong:(id)arg0 completion:(id)arg1 ;
+(void)runLstmPhsModelWithConfig:(id)arg0 withUrl:(id)arg1 completion:(id)arg2 ;
+(void)runOSDAnalyzerWithConfig:(id)arg0 withUrl:(id)arg1 completion:(id)arg2 ;
+(void)runVTSecondPassModelWithConfig:(id)arg0 locale:(id)arg1 withUrl:(id)arg2 completion:(id)arg3 ;


@end


#endif