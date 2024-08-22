// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLINFOFEEDBACKMESSAGE_H
#define CPLINFOFEEDBACKMESSAGE_H

@class NSDictionary;


#import "CPLFeedbackMessage.h"

@interface CPLInfoFeedbackMessage : CPLFeedbackMessage

@property (readonly, nonatomic) NSDictionary *info; // ivar: _info


+(id)feedbackType;
-(id)initWithInfo:(id)arg0 libraryIdentifier:(id)arg1 ;
-(id)serverMessage;


@end


#endif