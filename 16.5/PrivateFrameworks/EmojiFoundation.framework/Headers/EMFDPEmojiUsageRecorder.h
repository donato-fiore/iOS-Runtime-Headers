// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMFDPEMOJIUSAGERECORDER_H
#define EMFDPEMOJIUSAGERECORDER_H

@class NSLocale, NSString;


#import "EMFDPRecorder.h"

@interface EMFDPEmojiUsageRecorder : EMFDPRecorder

@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale
@property (readonly, nonatomic) NSString *usageModeIdentifier; // ivar: _usageModeIdentifier


+(id)_defaultUsageModeIdentifier;
-(BOOL)report;
-(id)delegate;
-(id)initWithEmoji:(id)arg0 ;
-(id)initWithEmoji:(id)arg0 usageModeIdentifier:(id)arg1 ;
-(id)recordingKey;


@end


#endif