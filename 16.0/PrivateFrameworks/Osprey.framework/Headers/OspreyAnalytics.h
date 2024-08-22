// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OSPREYANALYTICS_H
#define OSPREYANALYTICS_H


#import <Foundation/Foundation.h>


@interface OspreyAnalytics : NSObject



+(id)reporter;
-(void)_addURL:(id)arg0 toContext:(id)arg1 ;
-(void)reportAbsintheMetrics:(id)arg0 ;
-(void)reportConnectionMetrics:(id)arg0 ;
-(void)reportError:(id)arg0 forURL:(id)arg1 ;
-(void)reportEvent:(id)arg0 payload:(id)arg1 ;
-(void)reportHttpStatus:(NSInteger)arg0 grpcStatus:(NSInteger)arg1 forURL:(id)arg2 ;


@end


#endif