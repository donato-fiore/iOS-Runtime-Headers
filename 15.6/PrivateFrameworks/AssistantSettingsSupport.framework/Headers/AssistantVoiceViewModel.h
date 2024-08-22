// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASSISTANTVOICEVIEWMODEL_H
#define ASSISTANTVOICEVIEWMODEL_H

@class AFVoiceInfo, NSString, NSSet;

#import <Foundation/Foundation.h>


@interface AssistantVoiceViewModel : NSObject

@property (retain, nonatomic) AFVoiceInfo *currentVoice; // ivar: _currentVoice
@property (retain, nonatomic) AFVoiceInfo *inProgressVoice; // ivar: _inProgressVoice
@property (copy, nonatomic) NSString *languageGroupFooterText; // ivar: _languageGroupFooterText
@property (copy, nonatomic) NSSet *languageOptions; // ivar: _languageOptions
@property (copy, nonatomic) NSString *selectedLanguage; // ivar: _selectedLanguage
@property (nonatomic) BOOL shouldShowVoiceVariationGroup; // ivar: _shouldShowVoiceVariationGroup
@property (nonatomic) BOOL spinningOnLanguage; // ivar: _spinningOnLanguage
@property (copy, nonatomic) NSString *voiceVariationGroupFooterText; // ivar: _voiceVariationGroupFooterText
@property (copy, nonatomic) NSString *voiceVariationToCheckMark; // ivar: _voiceVariationToCheckMark
@property (copy, nonatomic) NSString *voiceVariationToSpin; // ivar: _voiceVariationToSpin




@end


#endif