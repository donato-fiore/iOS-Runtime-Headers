// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXSHORTCUTSEDITORSESSIONMETADATA_H
#define ATXSHORTCUTSEDITORSESSIONMETADATA_H

@class NSString;
@protocol ATXProactiveSuggestionUIFeedbackSessionMetadataProtocol;

#import <Foundation/Foundation.h>


@interface ATXShortcutsEditorSessionMetadata : NSObject <ATXProactiveSuggestionUIFeedbackSessionMetadataProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isLastSession; // ivar: _isLastSession
@property (nonatomic) NSUInteger numStepsInShortcutAtEnd; // ivar: _numStepsInShortcutAtEnd
@property (nonatomic) NSUInteger numStepsInShortcutAtStart; // ivar: _numStepsInShortcutAtStart
@property (nonatomic) BOOL stepWasManuallyAdded; // ivar: _stepWasManuallyAdded
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXShortcutsEditorSessionMetadata:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNumStepsInShortcutAtStart:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif