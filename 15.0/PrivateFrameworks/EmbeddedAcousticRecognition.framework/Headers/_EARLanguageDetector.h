// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _EARLANGUAGEDETECTOR_H
#define _EARLANGUAGEDETECTOR_H


#import <Foundation/Foundation.h>


@interface _EARLanguageDetector : NSObject {
    unique_ptr<quasar::LanguageDetector, std::default_delete<quasar::LanguageDetector>> languageDetector;
}


@property (nonatomic) unsigned int featureQueuePriority; // ivar: _featureQueuePriority


+(id)localesOfMessages:(id)arg0 ;
+(struct shared_ptr<const quasar::LDContext> )updateContext:(*void)arg0 withMessageLocales:(*void)arg1 ;
+(struct vector<std::optional<quasar::Locale>, std::allocator<std::optional<quasar::Locale>>> )quasarLocalesOfMessages:(id)arg0 ;
+(void)initialize;
-(id)initWithConfigFile:(id)arg0 ;
-(id)initWithConfigFile:(id)arg0 overrides:(id)arg1 ;
-(id)startRequestWith:(NSUInteger)arg0 context:(id)arg1 delegate:(id)arg2 ;


@end


#endif