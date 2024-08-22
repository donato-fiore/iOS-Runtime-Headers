// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CESRDICTATIONONDEVICESAMPLING_H
#define CESRDICTATIONONDEVICESAMPLING_H

@class NSMutableDictionary, NSDate;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CESRDictationOnDeviceSampling : NSObject

@property (retain, nonatomic) NSMutableDictionary *dictationSamplingVariables; // ivar: _dictationSamplingVariables
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fileQueue; // ivar: _fileQueue
@property (nonatomic) BOOL isDeviceSampledFromConfig; // ivar: _isDeviceSampledFromConfig
@property (nonatomic) NSInteger numberOfRequestsTillNow; // ivar: _numberOfRequestsTillNow
@property (retain, nonatomic) NSDate *samplingDate; // ivar: _samplingDate


+(BOOL)_isInternalInstall;
+(BOOL)_isSamplingAllowed;
+(id)_readDictationSampledPlist;
+(id)sharedManager;
-(BOOL)_isSamplingDateCurrent;
-(BOOL)isRequestSelectedForSamplingFromConfigForLanguage:(id)arg0 ;
-(id)init;
-(void)_setRequestCount:(NSInteger)arg0 ;
-(void)_updateDictationSampledPlist;
-(void)incrementSampledRequestCount;


@end


#endif