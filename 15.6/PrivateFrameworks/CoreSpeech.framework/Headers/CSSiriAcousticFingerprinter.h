// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSSIRIACOUSTICFINGERPRINTER_H
#define CSSIRIACOUSTICFINGERPRINTER_H

@class NSXPCConnection;
@protocol OS_dispatch_queue, CSSiriAcousticFingerprinterDelegate;

#import <Foundation/Foundation.h>


@interface CSSiriAcousticFingerprinter : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_asxConnection;
    NSUInteger _totalSampleCount;
    NSUInteger _nextFingerprintSampleNumber;
    AudioStreamBasicDescription _sourceASBD;
    CGFloat _interval;
    *OpaqueAudioConverter _fingerprinterConverter;
}


@property (weak, nonatomic) NSObject<CSSiriAcousticFingerprinterDelegate> *delegate; // ivar: _delegate


-(BOOL)_needsConversion;
-(NSUInteger)_samplesPerInterval;
-(id)_connection;
-(id)_convertPCMDataForFingerprinting:(id)arg0 ;
-(id)_service;
-(id)_serviceWithErrorHandler:(id)arg0 ;
-(id)init;
-(void)_cleanUpConnection;
-(void)_configureWithCurrentASBD;
-(void)_connectionInterrupted;
-(void)_connectionInvalidated;
-(void)appendPCMData:(id)arg0 ;
-(void)dealloc;
-(void)flush;
-(void)reset;
-(void)setASBD:(struct AudioStreamBasicDescription *)arg0 ;
-(void)setFingerprintInterval:(CGFloat)arg0 ;


@end


#endif