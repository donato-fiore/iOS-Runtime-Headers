// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGQUICKRESPONSESML_H
#define SGQUICKRESPONSESML_H

@protocol PMLTrainingProtocol;

#import <Foundation/Foundation.h>


@interface SGQuickResponsesML : NSObject {
    id<PMLTrainingProtocol> *_localTraining;
}




+(BOOL)_isImageAttachment:(id)arg0 ;
+(BOOL)_isSharingSenderLocation:(id)arg0 senderName:(id)arg1 ;
-(id)_dynamicLabelContentForReply:(id)arg0 prompt:(id)arg1 language:(id)arg2 ;
-(id)init;
-(id)initWithTraining:(id)arg0 ;
-(void)trainQuickResponsesForMessage:(id)arg0 withConversationHistory:(id)arg1 ;


@end


#endif