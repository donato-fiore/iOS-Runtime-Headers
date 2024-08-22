// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WIFIUSAGELQMTRANSFORMATIONS_H
#define WIFIUSAGELQMTRANSFORMATIONS_H


#import <Foundation/Foundation.h>


@interface WiFiUsageLQMTransformations : NSObject



+(NSUInteger)byteScale;
+(NSUInteger)getMaxPhyrateWithNss:(NSUInteger)arg0 Bw:(NSUInteger)arg1 Phy:(NSUInteger)arg2 ;
+(NSUInteger)mpduDensityScale;
+(NSUInteger)rateFromRatePercentage:(NSInteger)arg0 linkMaxRate:(NSUInteger)arg1 ;
+(NSUInteger)ratioScale;
+(NSUInteger)ratioWithValue:(NSUInteger)arg0 Over:(NSUInteger)arg1 WithScale:(NSUInteger)arg2 ;
+(id)dateWithMachContinuousTime:(NSUInteger)arg0 WithRef:(id)arg1 asNS:(NSUInteger)arg2 ;
+(id)getBinBytesPerFrame:(NSUInteger)arg0 As:(NSUInteger)arg1 ;
+(id)getBinBytesPerPacket:(NSUInteger)arg0 As:(NSUInteger)arg1 ;
+(id)getBinDecodingAttempts:(NSUInteger)arg0 As:(NSUInteger)arg1 ;
+(id)getBinDesense:(NSUInteger)arg0 As:(NSUInteger)arg1 ;
+(id)getBinEvery10thOverRatioScale:(NSUInteger)arg0 As:(NSUInteger)arg1 ;
+(id)getBinForDouble:(CGFloat)arg0 In:(id)arg1 WithLowestEdge:(id)arg2 As:(NSUInteger)arg3 ;
+(id)getBinForRoamingLatency:(NSUInteger)arg0 As:(NSUInteger)arg1 ;
+(id)getBinFrames:(NSUInteger)arg0 As:(NSUInteger)arg1 ;
+(id)getBinMpduDensity:(NSUInteger)arg0 As:(NSUInteger)arg1 ;
+(id)getBinNetworkQualityResponsiveness:(NSUInteger)arg0 As:(NSUInteger)arg1 ;
+(id)getBinNoise:(NSUInteger)arg0 As:(NSUInteger)arg1 ;
+(id)getBinQueuedAmpdu:(NSUInteger)arg0 As:(NSUInteger)arg1 ;
+(id)getBinRTT:(NSUInteger)arg0 As:(NSUInteger)arg1 ;
+(id)getBinRetries:(NSUInteger)arg0 As:(NSUInteger)arg1 ;
+(id)getBinRssi:(NSInteger)arg0 As:(NSUInteger)arg1 ;
+(id)getBinScannedChannels:(NSUInteger)arg0 As:(NSUInteger)arg1 ;
+(id)getBinSnr:(NSUInteger)arg0 As:(NSUInteger)arg1 ;
+(id)getBinThroughput:(NSUInteger)arg0 As:(NSUInteger)arg1 ;
+(id)getBinTimeIntervalUpTo12h:(CGFloat)arg0 As:(NSUInteger)arg1 ;
+(id)getBinTimeIntervalUpTo60s:(CGFloat)arg0 As:(NSUInteger)arg1 ;
+(id)getLabelPingPongStats:(id)arg0 ;
+(id)getLabelTrafficState:(NSUInteger)arg0 ;
+(id)numberForKeyPath:(id)arg0 ofObject:(id)arg1 ;
+(id)ofdmDesenseReason:(NSUInteger)arg0 ;
+(id)scanClient:(NSUInteger)arg0 ;
+(struct ? )ccaStatsWithDuration:(NSUInteger)arg0 ccaSelf:(NSUInteger)arg1 ccaOther:(NSUInteger)arg2 interference:(NSUInteger)arg3 ;
+(struct ? )ctrlFrmsPercentagesWithRxCtrlUcast:(NSUInteger)arg0 RTS:(NSUInteger)arg1 CTS:(NSUInteger)arg2 BACK:(NSUInteger)arg3 ACK:(NSUInteger)arg4 ;
+(struct ? )decodingAttemptsWithRxCrsGlitch:(NSUInteger)arg0 rxBadPLCP:(NSUInteger)arg1 RxBphyCrsGlitch:(NSUInteger)arg2 rxBphyBadPLCP:(NSUInteger)arg3 rxStart:(NSUInteger)arg4 ;
+(struct ? )ratePercentagesWithTxRate:(NSUInteger)arg0 rxRate:(NSUInteger)arg1 txFallbackRate:(NSUInteger)arg2 txFrames:(NSUInteger)arg3 rxFrames:(NSUInteger)arg4 nss:(NSUInteger)arg5 bw:(NSUInteger)arg6 phyMode:(NSUInteger)arg7 band:(int)arg8 deviceMaxRate:(NSInteger)arg9 ;
+(struct ? )rxDecodingErrorsPercentagesWithRxFrmTooLong:(NSUInteger)arg0 rxFrmTooShrt:(NSUInteger)arg1 rxBadFCS:(NSUInteger)arg2 rxResponseTimeout:(NSUInteger)arg3 rxNoDelim:(NSUInteger)arg4 rxAnyErr:(NSUInteger)arg5 rxFifo0Ovfl:(NSUInteger)arg6 rxFifo1Ovfl:(NSUInteger)arg7 ;
+(struct ? )rxUcastPercentagesWithRxData:(NSUInteger)arg0 rxMgmt:(NSUInteger)arg1 rxCtrl:(NSUInteger)arg2 ;
+(struct ? )txErrorsPercentagesWithtxSuccess:(NSUInteger)arg0 txDropped:(NSUInteger)arg1 txNoBuff:(NSUInteger)arg2 txNoRes:(NSUInteger)arg3 txNoAck:(NSUInteger)arg4 txChipModeErr:(NSUInteger)arg5 txExpired:(NSUInteger)arg6 txFail:(NSUInteger)arg7 txFwFree:(NSUInteger)arg8 txMaxRetries:(NSUInteger)arg9 txForceExpire:(NSUInteger)arg10 ;
+(void)initialize;
+(void)updateConfig;


@end


#endif