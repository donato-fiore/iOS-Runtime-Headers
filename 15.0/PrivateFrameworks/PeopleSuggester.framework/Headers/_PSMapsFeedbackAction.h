// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PSMAPSFEEDBACKACTION_H
#define _PSMAPSFEEDBACKACTION_H

@class PSFeedbackAction, NSString;



@interface _PSMapsFeedbackAction : PSFeedbackAction

@property (readonly, copy, nonatomic) NSString *contactId; // ivar: _contactId
@property (readonly, copy, nonatomic) NSString *handle; // ivar: _handle


+(id)engagementWithNonSuggestionWithContactIdentifier:(id)arg0 handle:(id)arg1 ;
+(id)engagementWithSuggestionWithContactIdentifier:(id)arg0 handle:(id)arg1 ;
-(id)initWithContactIdentifier:(id)arg0 handle:(id)arg1 type:(NSInteger)arg2 ;


@end


#endif