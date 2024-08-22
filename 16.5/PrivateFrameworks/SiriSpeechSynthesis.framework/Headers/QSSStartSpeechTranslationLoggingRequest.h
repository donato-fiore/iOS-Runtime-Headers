// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSSTARTSPEECHTRANSLATIONLOGGINGREQUEST_H
#define QSSSTARTSPEECHTRANSLATIONLOGGINGREQUEST_H

@class NSMutableDictionary, NSData, NSString, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "QSSLanguageDetected.h"
#import "QSSTranslationLocalePair.h"

@interface QSSStartSpeechTranslationLoggingRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *StartSpeechTranslationLoggingRequest _root;
}


@property (readonly, nonatomic) NSString *conversation_id;
@property (readonly, nonatomic) QSSLanguageDetected *detected_locale;
@property (readonly, nonatomic) NSString *request_id;
@property (readonly, nonatomic) NSArray *senses;
@property (readonly, nonatomic) QSSTranslationLocalePair *translation_locale_pair;
@property (readonly, nonatomic) NSArray *user_interacted_senses;
@property (readonly, nonatomic) NSString *user_selected_locale;
@property (readonly, nonatomic) NSString *user_selected_sense;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct StartSpeechTranslationLoggingRequest *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct StartSpeechTranslationLoggingRequest *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::StartSpeechTranslationLoggingRequest> )addObjectToBuffer:(*void)arg0 ;


@end


#endif