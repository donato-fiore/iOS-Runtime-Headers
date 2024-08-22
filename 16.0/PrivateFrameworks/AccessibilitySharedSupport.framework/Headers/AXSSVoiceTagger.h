// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXSSVOICETAGGER_H
#define AXSSVOICETAGGER_H


#import <Foundation/Foundation.h>


@interface AXSSVoiceTagger : NSObject



+(id)_currentLineContentForTag:(id)arg0 inTags:(id)arg1 ;
+(id)_primaryDialectForTag:(id)arg0 inTags:(id)arg1 ;
+(id)markupVoiceTagForAttributedString:(id)arg0 preferredLangauge:(id)arg1 ;
+(id)voiceTagsForContent:(id)arg0 preferredLangauge:(id)arg1 ;


@end


#endif