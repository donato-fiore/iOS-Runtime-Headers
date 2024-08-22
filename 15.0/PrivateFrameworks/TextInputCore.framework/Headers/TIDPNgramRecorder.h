// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIDPNGRAMRECORDER_H
#define TIDPNGRAMRECORDER_H



#import "TIDPNgramRecorderCascading.h"

@interface TIDPNgramRecorder : TIDPNgramRecorderCascading

@property (nonatomic) BOOL shouldDonateNgramSampleRandomly; // ivar: _shouldDonateNgramSampleRandomly


+(void)enumerateNgramsFromSession:(id)arg0 n:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(BOOL)report;
-(id)delegate;
-(id)initWithTypingSession:(id)arg0 aligned:(id)arg1 n:(NSUInteger)arg2 shouldDonateNgramSampleRandomly:(BOOL)arg3 ;
-(id)randomRecords;
-(id)randomRecordsLimitedByCount:(NSUInteger)arg0 ;
-(id)recordingKey;
-(id)records;


@end


#endif