// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLQUARANTINEFEEDBACKMESSAGE_H
#define CPLQUARANTINEFEEDBACKMESSAGE_H

@class NSString;


#import "CPLFeedbackMessage.h"

@interface CPLQuarantineFeedbackMessage : CPLFeedbackMessage

@property (readonly, nonatomic) NSString *reason; // ivar: _reason
@property (readonly, nonatomic) Class recordClass; // ivar: _recordClass


+(id)feedbackType;
-(id)initWithClass:(Class)arg0 reason:(id)arg1 libraryIdentifier:(id)arg2 ;
-(id)serverMessage;


@end


#endif