// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSTRANSLATIONSUPPORTEDLANGUAGESRESPONSE_LANGUAGEPAIR_H
#define QSSTRANSLATIONSUPPORTEDLANGUAGESRESPONSE_LANGUAGEPAIR_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSTranslationSupportedLanguagesResponse_LanguagePair : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *LanguagePair _root;
}


@property (readonly, nonatomic) NSString *source_locale;
@property (readonly, nonatomic) NSString *target_locale;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct LanguagePair *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct LanguagePair *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::TranslationSupportedLanguagesResponse_::LanguagePair> )addObjectToBuffer:(*void)arg0 ;


@end


#endif