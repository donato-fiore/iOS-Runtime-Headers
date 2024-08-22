// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MXSAMPLEANALYSISPARSER_H
#define MXSAMPLEANALYSISPARSER_H


#import <Foundation/Foundation.h>


@interface MXSampleAnalysisParser : NSObject



+(id)constructPayloadWithReport:(id)arg0 withType:(NSInteger)arg1 ;
+(id)getCallStackForReport:(id)arg0 withType:(NSInteger)arg1 ;
+(id)parseCallTree:(id)arg0 isAttributedThread:(BOOL)arg1 ;
+(id)parseCallTreeFrame:(id)arg0 withDepth:(NSUInteger)arg1 ;
+(void)sendDiagnosticReport:(id)arg0 forType:(NSInteger)arg1 forSourceID:(NSInteger)arg2 ;
+(void)sendDiagnosticReport:(id)arg0 forType:(NSInteger)arg1 forSourceID:(NSInteger)arg2 options:(id)arg3 ;


@end


#endif