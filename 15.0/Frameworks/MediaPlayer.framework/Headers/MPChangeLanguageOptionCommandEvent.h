// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCHANGELANGUAGEOPTIONCOMMANDEVENT_H
#define MPCHANGELANGUAGEOPTIONCOMMANDEVENT_H



#import "MPRemoteCommandEvent.h"
#import "MPNowPlayingInfoLanguageOption.h"

@interface MPChangeLanguageOptionCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) MPNowPlayingInfoLanguageOption *languageOption; // ivar: _languageOption
@property (readonly, nonatomic) NSInteger setting; // ivar: _setting


-(id)initWithCommand:(id)arg0 mediaRemoteType:(unsigned int)arg1 options:(id)arg2 ;


@end


#endif