// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSRVOICEPROFILEPRUNER_H
#define SSRVOICEPROFILEPRUNER_H

@class NSString;
@protocol SSRSpeakerRecognitionControllerDelegate;

#import <Foundation/Foundation.h>


@interface SSRVoiceProfilePruner : NSObject <SSRSpeakerRecognitionControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)_deleteUtterances:(id)arg0 ;
-(id)_retrainVoiceProfile:(id)arg0 withAsset:(id)arg1 ;
-(void)_getScoresForAudio:(id)arg0 withController:(id)arg1 withDetector:(id)arg2 forProfile:(id)arg3 withCompletion:(id)arg4 ;
-(void)pruneVoiceProfile:(id)arg0 forSpIdType:(NSUInteger)arg1 withAsset:(id)arg2 ;


@end


#endif