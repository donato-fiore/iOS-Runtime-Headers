// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGMIWARNINGSDETECTORS_H
#define SGMIWARNINGSDETECTORS_H


#import <Foundation/Foundation.h>

#import "SGMIWarningsDetectionRegexes.h"

@interface SGMIWarningsDetectors : NSObject

@property (readonly, nonatomic) SGMIWarningsDetectionRegexes *attachment; // ivar: _attachment
@property (readonly, nonatomic) SGMIWarningsDetectionRegexes *followUpOnIncomingMails; // ivar: _followUpOnIncomingMails
@property (readonly, nonatomic) SGMIWarningsDetectionRegexes *followUpOnOutgoingMailsAsks; // ivar: _followUpOnOutgoingMailsAsks
@property (readonly, nonatomic) SGMIWarningsDetectionRegexes *followUpOnOutgoingMailsQuestions; // ivar: _followUpOnOutgoingMailsQuestions
@property (readonly, nonatomic) SGMIWarningsDetectionRegexes *nickname; // ivar: _nickname
@property (readonly, nonatomic) SGMIWarningsDetectionRegexes *recipient; // ivar: _recipient
@property (readonly, nonatomic) SGMIWarningsDetectionRegexes *recipientConservative; // ivar: _recipientConservative


-(id)description;
-(id)initWithAttachmentDictionary:(id)arg0 recipientConservativeDictionary:(id)arg1 recipientDictionary:(id)arg2 nicknameDictionary:(id)arg3 followUpOnOutgoingMailsQuestionsDictionary:(id)arg4 followUpOnOutgoingMailsAsksDictionary:(id)arg5 followUpOnIncomingMailsDictionary:(id)arg6 ;


@end


#endif