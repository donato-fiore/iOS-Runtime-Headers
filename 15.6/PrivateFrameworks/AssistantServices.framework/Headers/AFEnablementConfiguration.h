// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFENABLEMENTCONFIGURATION_H
#define AFENABLEMENTCONFIGURATION_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface AFEnablementConfiguration : NSObject

@property (readonly, retain, nonatomic) id *completionLoggingBlock; // ivar: _completionLoggingBlock
@property (readonly, nonatomic) BOOL requiresVoiceSelection; // ivar: _requiresVoiceSelection
@property (readonly, nonatomic) NSDictionary *voiceCountForRecognitionLanguage; // ivar: _voiceCountForRecognitionLanguage
@property (readonly, nonatomic) BOOL voiceSelectionAllowsRandomSelection; // ivar: _voiceSelectionAllowsRandomSelection


-(BOOL)requiresVoiceSelectionForRecognitionLanguage:(id)arg0 ;
-(id)initWithRequiresVoiceSelection:(BOOL)arg0 voiceSelectionAllowsChooseForMe:(BOOL)arg1 voiceCountForRecognitionLanguage:(id)arg2 completionLoggingBlock:(id)arg3 ;


@end


#endif