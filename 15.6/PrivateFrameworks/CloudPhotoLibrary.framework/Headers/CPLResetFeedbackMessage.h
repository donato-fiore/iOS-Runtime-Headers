// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLRESETFEEDBACKMESSAGE_H
#define CPLRESETFEEDBACKMESSAGE_H

@class NSString;


#import "CPLFeedbackMessage.h"

@interface CPLResetFeedbackMessage : CPLFeedbackMessage

@property (readonly, nonatomic) NSString *reason; // ivar: _reason
@property (readonly, nonatomic) NSString *resetType; // ivar: _resetType
@property (readonly, nonatomic) NSString *uuid; // ivar: _uuid


+(id)feedbackType;
-(id)initWithResetType:(id)arg0 reason:(id)arg1 uuid:(id)arg2 libraryIdentifier:(id)arg3 ;
-(id)serverMessage;


@end


#endif