// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTDTRACERECORDENUMERATOR_H
#define DTDTRACERECORDENUMERATOR_H


#import <Foundation/Foundation.h>

#import "DTDTraceTapMemo.h"
#import "DTDTraceTapRecordDecoder.h"

@interface DTDTraceRecordEnumerator : NSObject

@property (retain, nonatomic) DTDTraceTapMemo *memo; // ivar: _memo
@property (retain, nonatomic) DTDTraceTapRecordDecoder *recordDecoder; // ivar: _recordDecoder


-(void)enumerateRecordsWithBlock:(id)arg0 ;


@end


#endif