// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CESRDICTATIONONDEVICESAMPLING_H
#define CESRDICTATIONONDEVICESAMPLING_H

@class NSDate, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CESRDictationOnDeviceSampling : NSObject

@property (retain, nonatomic) NSDate *currentSamplingDate; // ivar: _currentSamplingDate
@property (retain, nonatomic) NSMutableDictionary *dictationSamplingVaribles; // ivar: _dictationSamplingVaribles
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fileQueue; // ivar: _fileQueue
@property (nonatomic) BOOL isDeviceSampledFromConfig; // ivar: _isDeviceSampledFromConfig
@property (nonatomic) BOOL isRequestConsideredForSampling; // ivar: _isRequestConsideredForSampling
@property (nonatomic) NSInteger numberOfRequestsTillNow; // ivar: _numberOfRequestsTillNow


+(id)_readDictationSampledPlist;
+(id)sharedManager;
-(BOOL)isRequestSelectedForSampling;
-(BOOL)isRequestSelectedForSamplingFromConfigForLanguage:(id)arg0 ;
-(BOOL)isSamplingDateCurrent;
-(id)init;
-(void)_createDictationSampledPlistIfItDoesNotExist;
-(void)_writeDictationSamplingVariablesToFile:(id)arg0 ;
-(void)createDictationSampledPlistIfItDoesNotExist;
-(void)decrementRequestCount;
-(void)incrementRequestCount;
-(void)resetRequestCount;
-(void)setRequestCount:(NSInteger)arg0 ;
-(void)updateDateToCurrent;
-(void)updateRequestCountWithFlag:(BOOL)arg0 ;


@end


#endif