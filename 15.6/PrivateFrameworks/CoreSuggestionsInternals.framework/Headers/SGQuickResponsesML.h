// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGQUICKRESPONSESML_H
#define SGQUICKRESPONSESML_H

@class NSDictionary, _PASLock;
@protocol PMLTrainingProtocol;

#import <Foundation/Foundation.h>


@interface SGQuickResponsesML : NSObject {
    id<PMLTrainingProtocol> *_localTraining;
    NSDictionary *_languagesToRecord;
    _PASLock *_perLanguageRecordersLock;
}




+(BOOL)_isImageAttachment:(id)arg0 ;
+(BOOL)_isSharingSenderLocation:(id)arg0 senderName:(id)arg1 ;
+(BOOL)isFileInString:(id)arg0 ;
+(BOOL)isFourDigitInString:(id)arg0 ;
+(BOOL)isLinkInString:(id)arg0 ;
-(id)_dynamicLabelContentForReply:(id)arg0 prompt:(id)arg1 language:(id)arg2 ;
-(id)init;
-(id)initWithTraining:(id)arg0 andRecorders:(id)arg1 ;
-(void)dpRecordMessageText:(id)arg0 inLanguage:(id)arg1 ;
-(void)trainQuickResponsesForMessage:(id)arg0 withConversationHistory:(id)arg1 ;


@end


#endif