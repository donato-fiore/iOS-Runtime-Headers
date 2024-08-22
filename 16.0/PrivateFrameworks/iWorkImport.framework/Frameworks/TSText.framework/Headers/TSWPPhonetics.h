// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPPHONETICS_H
#define TSWPPHONETICS_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface TSWPPhonetics : NSObject {
    NSDictionary *_transcribers;
}




+(id)_singletonAlloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)orderedTranscriberIDsForLanguage:(int)arg0 ;
+(id)sharedDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)pronunciationSuggestionsForBaseText:(id)arg0 locale:(id)arg1 language:(int)arg2 ;
-(id)transcriberForBaseText:(id)arg0 range:(struct _NSRange )arg1 documentLocale:(id)arg2 outLanguageLocale:(*id)arg3 outTextLanguageCode:(*int)arg4 ;
-(id)transcriberWithIdentifier:(id)arg0 ;


@end


#endif