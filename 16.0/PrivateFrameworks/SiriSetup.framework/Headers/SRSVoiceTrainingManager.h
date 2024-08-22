// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SRSVOICETRAININGMANAGER_H
#define SRSVOICETRAININGMANAGER_H

@class SSRVTUITrainingManager, NSString;
@protocol SSRVTUITrainingManagerDelegate, SRSTrainingManagerDelegate;

#import <Foundation/Foundation.h>


@interface SRSVoiceTrainingManager : NSObject <SSRVTUITrainingManagerDelegate>

 {
    SSRVTUITrainingManager *_trainingManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SRSTrainingManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)convertStatus:(int)arg0 ;
-(id)initWithLanguageCode:(id)arg0 ;
-(id)voiceProfile;
-(void)VTUITrainingManagerFeedLevel:(float)arg0 ;
-(void)cancelTrainingForSessionId:(NSInteger)arg0 ;
-(void)cleanupWithCompletion:(id)arg0 ;
-(void)startRMS;
-(void)stopRMS;
-(void)trainUtterance:(NSInteger)arg0 shouldUseASR:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif