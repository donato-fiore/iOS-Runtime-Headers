// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUICVOICESELECTIONVOICECOLLECTION_H
#define SUICVOICESELECTIONVOICECOLLECTION_H

@class NSSet, AFVoiceInfo, NSArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SUICVoiceSelectionVoiceCollection : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSSet *alternativeVoices; // ivar: _alternativeVoices
@property (readonly, copy, nonatomic) AFVoiceInfo *currentVoice; // ivar: _currentVoice
@property (readonly, copy, nonatomic) NSArray *dialectLanguageCodes; // ivar: _dialectLanguageCodes
@property (readonly, copy, nonatomic) NSString *languageCode; // ivar: _languageCode


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithLanguageCode:(id)arg0 dialectLanguageCodes:(id)arg1 currentVoice:(id)arg2 alternativeVoices:(id)arg3 ;
-(id)randomVoice;


@end


#endif