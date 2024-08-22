// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BIOMETRICAUTOBUGCAPTURE_H
#define BIOMETRICAUTOBUGCAPTURE_H

@class NSString, SDRDiagnosticReporter;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BiometricAutoBugCapture : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic) NSString *domain; // ivar: _domain
@property (retain, nonatomic) NSString *process; // ivar: _process
@property (readonly, nonatomic) SDRDiagnosticReporter *reporter; // ivar: _reporter
@property (readonly, nonatomic) BOOL serialLogEnabled; // ivar: _serialLogEnabled


-(BOOL)sendAutoBugCaptureEvent:(NSUInteger)arg0 ;
-(BOOL)sendSignature:(id)arg0 withDuration:(CGFloat)arg1 ;
-(id)getSignatureForReason:(NSUInteger)arg0 ;
-(id)getSignatureWithType:(id)arg0 subtype:(id)arg1 ;
-(id)getSubtypeForReason:(NSUInteger)arg0 ;
-(id)getTypeForReason:(NSUInteger)arg0 ;
-(id)initWithDomain:(id)arg0 process:(id)arg1 dispatchQueue:(id)arg2 ;


@end


#endif