// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICMENTIONSCONTROLLER_H
#define ICMENTIONSCONTROLLER_H

@class ICAttachmentInsertionController, NSString, NSMutableDictionary, NSMutableSet, ICTableColumnTextView, UITextView;
@protocol ICMentionsControllerUI, OS_dispatch_queue, ICMentionsAnalyticsDelegate, NSObject, ICMentionsKeyboardDelegate;

#import <Foundation/Foundation.h>

#import "ICNote.h"
#import "ICMentionsParticipantNode.h"

@interface ICMentionsController : NSObject <ICMentionsControllerUI>

 {
    NSObject<OS_dispatch_queue> *_contactsRequestQueue;
    id *_contactsRequestBlock;
}


@property (readonly, nonatomic) BOOL allowsMentions;
@property (weak, nonatomic) NSObject<ICMentionsAnalyticsDelegate> *analyticsDelegate; // ivar: _analyticsDelegate
@property (weak, nonatomic) ICAttachmentInsertionController *attachmentInsertionController; // ivar: _attachmentInsertionController
@property (retain, nonatomic) NSObject<NSObject> *contactsChangedObserverToken; // ivar: _contactsChangedObserverToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) _NSRange editedRange; // ivar: _editedRange
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isUpdatingKeyboard; // ivar: _isUpdatingKeyboard
@property (readonly, nonatomic) NSUInteger maxLengthOfStringForCheckingMention;
@property (nonatomic) NSUInteger maxNameLength; // ivar: _maxNameLength
@property (weak, nonatomic) NSObject<ICMentionsKeyboardDelegate> *mentionsKeyboardDelegate; // ivar: _mentionsKeyboardDelegate
@property (weak, nonatomic) NSObject<ICMentionsKeyboardDelegate> *mentionsTableKeyboardDelegate; // ivar: _mentionsTableKeyboardDelegate
@property (weak, nonatomic) ICNote *note; // ivar: _note
@property (retain, nonatomic) NSMutableDictionary *participantDictionary; // ivar: _participantDictionary
@property (retain, nonatomic) NSMutableSet *participantNames; // ivar: _participantNames
@property (retain, nonatomic) NSMutableSet *participantRecordNames; // ivar: _participantRecordNames
@property (retain, nonatomic) ICMentionsParticipantNode *participantTree; // ivar: _participantTree
@property (readonly) Class superclass;
@property (weak, nonatomic) ICTableColumnTextView *tableTextView; // ivar: _tableTextView
@property (weak, nonatomic) UITextView *textView; // ivar: _textView


+(BOOL)isBeginningExplicitMentionAtSelectionRange:(struct _NSRange )arg0 inString:(id)arg1 languageHasSpaces:(BOOL)arg2 ;
+(BOOL)isValidPostfixCharacter:(unsigned short)arg0 ;
+(BOOL)isValidPrefixCharacter:(unsigned short)arg0 languageHasSpaces:(BOOL)arg1 ;
+(BOOL)range:(struct _NSRange )arg0 hasValidPostfixCharacterForString:(id)arg1 ;
+(BOOL)range:(struct _NSRange )arg0 hasValidPrefixCharacterForString:(id)arg1 languageHasSpaces:(BOOL)arg2 ;
+(BOOL)range:(struct _NSRange )arg0 isPrefixedWithAtForString:(id)arg1 ;
+(id)allKeyword;
+(id)allUserRecordName;
+(struct _NSRange )range:(struct _NSRange )arg0 appendingSubstringRange:(struct _NSRange )arg1 ;
+(struct _NSRange )rangeOfLastCharacterInRange:(struct _NSRange )arg0 ;
-(id)checkForMentionsInString:(id)arg0 inRange:(struct _NSRange )arg1 selectionRange:(struct _NSRange )arg2 languageHasSpaces:(BOOL)arg3 ;
-(id)initWithNote:(id)arg0 ;
-(id)participantsForKey:(id)arg0 ;
-(void)addAllKeywordToParticipantTree;
-(void)associateParticipant:(id)arg0 withKey:(id)arg1 ;
-(void)dealloc;
-(void)updateMentionsAssociations;
-(void)updateNoteParticipants;


@end


#endif