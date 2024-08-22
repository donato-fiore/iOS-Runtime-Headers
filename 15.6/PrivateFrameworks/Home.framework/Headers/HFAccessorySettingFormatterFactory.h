// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFACCESSORYSETTINGFORMATTERFACTORY_H
#define HFACCESSORYSETTINGFORMATTERFACTORY_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface HFAccessorySettingFormatterFactory : NSObject

@property (retain, nonatomic) NSMutableDictionary *formattersForKey; // ivar: _formattersForKey


+(id)_announceEnabledFormatter;
+(id)_doorbellChimeEnabledFormatter;
+(id)_siriFormatter;
+(id)_siriOutputVoiceFormatter;
+(id)_siriPersonalRequestsFormatter;
+(id)_siriRecognitionLanguageFormatter;
+(id)defaultFactory;
-(id)_buildFormatterForKey:(id)arg0 ;
-(id)formatterForKey:(id)arg0 ;
-(id)formatterForKey:(id)arg0 copy:(BOOL)arg1 ;
-(id)init;


@end


#endif