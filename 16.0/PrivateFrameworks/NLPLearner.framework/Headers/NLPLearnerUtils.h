// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NLPLEARNERUTILS_H
#define NLPLEARNERUTILS_H


#import <Foundation/Foundation.h>


@interface NLPLearnerUtils : NSObject



+(BOOL)checkVietnameseCharactersInText:(id)arg0 ;
+(BOOL)isInternalInstall;
+(NSUInteger)sourceForEvent:(id)arg0 ;
+(id)getAttachmentURLByName:(id)arg0 attachments:(id)arg1 error:(*id)arg2 ;
+(id)getAttachmentURLByName:(id)arg0 inDirectory:(id)arg1 error:(*id)arg2 ;
+(id)languageForText:(id)arg0 ;
+(id)languageForText:(id)arg0 checkVietnamese:(BOOL)arg1 ;
+(id)messageContentForEvent:(id)arg0 ;
+(id)messageContentForEvent:(id)arg0 andLanguage:(id)arg1 ;
+(void)initialize;
+(void)removeTemporaryFile:(id)arg0 ;


@end


#endif