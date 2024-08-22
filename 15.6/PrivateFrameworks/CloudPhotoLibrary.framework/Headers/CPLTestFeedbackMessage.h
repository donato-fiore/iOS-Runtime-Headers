// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLTESTFEEDBACKMESSAGE_H
#define CPLTESTFEEDBACKMESSAGE_H

@class NSString;


#import "CPLFeedbackMessage.h"

@interface CPLTestFeedbackMessage : CPLFeedbackMessage

@property (readonly, nonatomic) NSString *testMessage; // ivar: _testMessage


+(id)feedbackType;
-(id)initWithTestMessage:(id)arg0 libraryIdentifier:(id)arg1 ;
-(id)serverMessage;


@end


#endif