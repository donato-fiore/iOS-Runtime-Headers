// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSVTUISELFLOGGINGDIGITALZEROREPORTER_H
#define CSVTUISELFLOGGINGDIGITALZEROREPORTER_H

@class NSUUID, NSString;
@protocol CSDigitalZeroReporting;

#import <Foundation/Foundation.h>


@interface CSVTUISelfLoggingDigitalZeroReporter : NSObject <CSDigitalZeroReporting>

 {
    NSUUID *_siriSetupID;
    int _pageNumber;
    NSString *_phId;
    int _maxNumContinuousZeros;
    int _maxNumAllowedContinuousZeros;
    BOOL _isMaxNumContinuousZerosOverThreshold;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)digitalZeroDetected;
-(id)initWithSiriSetupID:(id)arg0 PageNumber:(int)arg1 withPhId:(id)arg2 ;
-(void)logDigitalZeroDetectionComplete;
-(void)reportDigitalZerosWithAudioZeroRun:(float)arg0 ;


@end


#endif