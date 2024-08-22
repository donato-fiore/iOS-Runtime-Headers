// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TTSNASHVILLESPEECHVOICE_H
#define TTSNASHVILLESPEECHVOICE_H

@class TTSSpeechVoice;



@interface TTSNashvilleSpeechVoice : TTSSpeechVoice

@property (nonatomic) BOOL overrideDefault; // ivar: _overrideDefault
@property (nonatomic) BOOL overrideExcludeInAvailableVoiceList; // ivar: _overrideExcludeInAvailableVoiceList
@property (nonatomic) BOOL overrideFallbackDefault; // ivar: _overrideFallbackDefault
@property (nonatomic) NSInteger voiceType; // ivar: _voiceType


+(BOOL)supportsSecureCoding;
-(BOOL)excludeInAvailableVoiceList;
-(BOOL)isCombinedFootprint;
-(BOOL)isDefault;
-(BOOL)isFallbackDefault;
-(BOOL)isSystemVoice;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif