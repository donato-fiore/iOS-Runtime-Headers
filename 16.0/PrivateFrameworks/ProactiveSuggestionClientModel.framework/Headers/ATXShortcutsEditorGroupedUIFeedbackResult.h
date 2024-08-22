// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXSHORTCUTSEDITORGROUPEDUIFEEDBACKRESULT_H
#define ATXSHORTCUTSEDITORGROUPEDUIFEEDBACKRESULT_H

@protocol NSSecureCoding, ATXProtoBufWrapper;


#import "ATXProactiveSuggestionGroupedUIFeedbackResult.h"
#import "ATXPBContextualActionsGroupedUIFeedbackResult.h"

@interface ATXShortcutsEditorGroupedUIFeedbackResult : ATXProactiveSuggestionGroupedUIFeedbackResult <NSSecureCoding, ATXProtoBufWrapper>

 {
    ATXPBContextualActionsGroupedUIFeedbackResult *_proto;
}


@property (nonatomic) NSUInteger numManuallyAddedSteps;
@property (nonatomic) NSUInteger numShortcutsAtEnd;
@property (nonatomic) NSUInteger numShortcutsAtStart;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXContextualActionsGroupedUIFeedbackResult:(id)arg0 ;
-(BOOL)isValid;
-(NSUInteger)hash;
-(id)description;
-(id)encodeAsProto;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)jsonDict;
-(id)proto;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif