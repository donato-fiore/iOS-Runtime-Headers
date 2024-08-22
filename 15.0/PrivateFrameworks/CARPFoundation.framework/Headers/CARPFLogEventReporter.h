// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CARPFLOGEVENTREPORTER_H
#define CARPFLOGEVENTREPORTER_H


#import <Foundation/Foundation.h>


@interface CARPFLogEventReporter : NSObject

@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;


+(id)sharedReporter;
-(id)adoptVoucher:(id)arg0 signpostId:(NSUInteger)arg1 finalizeBlock:(id)arg2 ;
-(id)initWithSystemInfo:(id)arg0 ;
-(id)startSessionForServiceName:(id)arg0 signpostId:(NSUInteger)arg1 finalizeBlock:(id)arg2 ;
-(void)submitSingleEventWithName:(id)arg0 payload:(id)arg1 ;


@end


#endif