// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSGINPUTSUGGESTIONSREQUEST_H
#define PSGINPUTSUGGESTIONSREQUEST_H

@class NSString, NSSet, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PSGInputSuggestionsRequest : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *adaptationContextID; // ivar: _adaptationContextID
@property (readonly, nonatomic) NSSet *availableApps; // ivar: _availableApps
@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSString *contextAfterInput; // ivar: _contextAfterInput
@property (readonly, nonatomic) NSString *contextBeforeInput; // ivar: _contextBeforeInput
@property (readonly, nonatomic) NSArray *conversationTurns; // ivar: _conversationTurns
@property (readonly, nonatomic) NSString *initiatingProcess; // ivar: _initiatingProcess
@property (readonly, nonatomic) BOOL isDocumentEmpty; // ivar: _isDocumentEmpty
@property (readonly, nonatomic) BOOL isResponseContextBlacklisted; // ivar: _isResponseContextBlacklisted
@property (readonly, nonatomic) NSString *localeIdentifier; // ivar: _localeIdentifier
@property (readonly, nonatomic) NSString *markedText; // ivar: _markedText
@property (readonly, nonatomic) NSSet *recipientNames; // ivar: _recipientNames
@property (readonly, nonatomic) NSArray *recipients; // ivar: _recipients
@property (readonly, nonatomic) NSString *responseContext; // ivar: _responseContext
@property (readonly, nonatomic) NSArray *responseKitConversationTurns; // ivar: _responseKitConversationTurns
@property (readonly, nonatomic) _NSRange selectedRangeInMarkedText; // ivar: _selectedRangeInMarkedText
@property (readonly, nonatomic) NSString *selectedText; // ivar: _selectedText
@property (readonly, nonatomic) BOOL shouldDisableAutoCaps; // ivar: _shouldDisableAutoCaps
@property (readonly, nonatomic) NSUInteger structuredInfoLimit; // ivar: _structuredInfoLimit
@property (readonly, nonatomic) NSString *textContentType; // ivar: _textContentType
@property (readonly, nonatomic) NSUInteger textualResponseLimit; // ivar: _textualResponseLimit
@property (readonly, nonatomic) NSUInteger totalSuggestionsLimit; // ivar: _totalSuggestionsLimit


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRequest:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResponseContext:(id)arg0 conversationTurns:(id)arg1 adaptationContextID:(id)arg2 shouldDisableAutoCaps:(BOOL)arg3 isResponseContextBlacklisted:(BOOL)arg4 contextBeforeInput:(id)arg5 markedText:(id)arg6 selectedText:(id)arg7 contextAfterInput:(id)arg8 selectedRangeInMarkedText:(struct _NSRange )arg9 localeIdentifier:(id)arg10 bundleIdentifier:(id)arg11 recipients:(id)arg12 recipientNames:(id)arg13 textContentType:(id)arg14 availableApps:(id)arg15 textualResponseLimit:(NSUInteger)arg16 structuredInfoLimit:(NSUInteger)arg17 totalSuggestionsLimit:(NSUInteger)arg18 ;
-(id)initWithResponseContext:(id)arg0 conversationTurns:(id)arg1 adaptationContextID:(id)arg2 shouldDisableAutoCaps:(BOOL)arg3 isResponseContextBlacklisted:(BOOL)arg4 contextBeforeInput:(id)arg5 markedText:(id)arg6 selectedText:(id)arg7 contextAfterInput:(id)arg8 selectedRangeInMarkedText:(struct _NSRange )arg9 localeIdentifier:(id)arg10 bundleIdentifier:(id)arg11 recipients:(id)arg12 textContentType:(id)arg13 availableApps:(id)arg14 textualResponseLimit:(NSUInteger)arg15 structuredInfoLimit:(NSUInteger)arg16 ;
-(id)initWithResponseContext:(id)arg0 conversationTurns:(id)arg1 responseKitConversationTurns:(id)arg2 adaptationContextID:(id)arg3 shouldDisableAutoCaps:(BOOL)arg4 isResponseContextBlacklisted:(BOOL)arg5 contextBeforeInput:(id)arg6 markedText:(id)arg7 selectedText:(id)arg8 contextAfterInput:(id)arg9 selectedRangeInMarkedText:(struct _NSRange )arg10 localeIdentifier:(id)arg11 bundleIdentifier:(id)arg12 recipients:(id)arg13 recipientNames:(id)arg14 textContentType:(id)arg15 availableApps:(id)arg16 textualResponseLimit:(NSUInteger)arg17 structuredInfoLimit:(NSUInteger)arg18 totalSuggestionsLimit:(NSUInteger)arg19 ;
-(id)initWithResponseContext:(id)arg0 conversationTurns:(id)arg1 responseKitConversationTurns:(id)arg2 adaptationContextID:(id)arg3 shouldDisableAutoCaps:(BOOL)arg4 isResponseContextBlacklisted:(BOOL)arg5 contextBeforeInput:(id)arg6 markedText:(id)arg7 selectedText:(id)arg8 contextAfterInput:(id)arg9 selectedRangeInMarkedText:(struct _NSRange )arg10 localeIdentifier:(id)arg11 bundleIdentifier:(id)arg12 recipients:(id)arg13 recipientNames:(id)arg14 textContentType:(id)arg15 availableApps:(id)arg16 textualResponseLimit:(NSUInteger)arg17 structuredInfoLimit:(NSUInteger)arg18 totalSuggestionsLimit:(NSUInteger)arg19 initiatingProcess:(id)arg20 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif