// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MXCOREPAYLOADCONSTRUCTOR_H
#define MXCOREPAYLOADCONSTRUCTOR_H


#import <Foundation/Foundation.h>


@interface MXCorePayloadConstructor : NSObject



+(id)buildDiagnosticPayloadForClient:(id)arg0 fromClientDiagnosticsDictionary:(id)arg1 withDateString:(id)arg2 ;
+(id)buildDummyDiagnosticPayloadForClient:(id)arg0 withDateString:(id)arg1 ;
+(id)buildDummyPayloadForClient:(id)arg0 withDateString:(id)arg1 ;
+(id)buildPayloadForClient:(id)arg0 fromClientMetricsDictionary:(id)arg1 ;
+(id)constructPayloadWithServiceString:(id)arg0 withSourceData:(id)arg1 withDateString:(id)arg2 forClient:(id)arg3 ;
+(id)updatePayload:(id)arg0 withServiceString:(id)arg1 withSourceData:(id)arg2 withDateString:(id)arg3 forClient:(id)arg4 ;


@end


#endif