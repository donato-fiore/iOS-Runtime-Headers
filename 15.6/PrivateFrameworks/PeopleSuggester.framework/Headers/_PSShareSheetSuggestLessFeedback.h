// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PSSHARESHEETSUGGESTLESSFEEDBACK_H
#define _PSSHARESHEETSUGGESTLESSFEEDBACK_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _PSShareSheetSuggestLessFeedback : NSObject

@property (readonly, copy, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, copy, nonatomic) NSString *contactId; // ivar: _contactId
@property (readonly, copy, nonatomic) NSString *conversationId; // ivar: _conversationId
@property (readonly, copy, nonatomic) NSString *derivedIntentId; // ivar: _derivedIntentId
@property (readonly, copy, nonatomic) NSString *handle; // ivar: _handle


-(id)initWithBundleId:(id)arg0 conversationId:(id)arg1 derivedIntentId:(id)arg2 handle:(id)arg3 contactId:(id)arg4 ;
-(id)initWithBundleId:(id)arg0 conversationId:(id)arg1 handle:(id)arg2 contactId:(id)arg3 ;
-(id)knowledgeEvent;


@end


#endif