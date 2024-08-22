// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFMAILCOMPOSITIONVALUES_H
#define MFMAILCOMPOSITIONVALUES_H

@class NSArray, NSString, NSMutableArray, NSURL, NSData;
@protocol NSSecureCoding, MFMailCompositionValuesProtocol, MFMailCompositionAdditionalDonating, MFMailCompositionShareSheetRecipients;

#import <Foundation/Foundation.h>


@interface MFMailCompositionValues : NSObject <NSSecureCoding, MFMailCompositionValuesProtocol, MFMailCompositionAdditionalDonating, MFMailCompositionShareSheetRecipients>



@property (copy, nonatomic) NSArray *UTITypes; // ivar: _UTITypes
@property (copy, nonatomic) NSString *autosaveIdentifier; // ivar: _autosaveIdentifier
@property (copy, nonatomic) NSArray *bccRecipients; // ivar: _bccRecipients
@property (nonatomic) NSUInteger caretPosition; // ivar: _caretPosition
@property (copy, nonatomic) NSArray *ccRecipients; // ivar: _ccRecipients
@property (copy, nonatomic) NSArray *cloudPhotoIDs; // ivar: _cloudPhotoIDs
@property (nonatomic) NSInteger composeType; // ivar: _composeType
@property (copy, nonatomic) NSArray *contentText; // ivar: _contentText
@property (copy, nonatomic) NSArray *contentURLs; // ivar: _contentURLs
@property (copy, nonatomic) NSMutableArray *contentVariations; // ivar: _contentVariations
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSInteger defaultContentVariationIndex; // ivar: _defaultContentVariationIndex
@property (retain, nonatomic) NSMutableArray *deferredAttachments; // ivar: _deferredAttachments
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL includeAttachments; // ivar: _includeAttachments
@property (nonatomic) BOOL isHTML; // ivar: _isHTML
@property (nonatomic) BOOL isUsingDefaultAccount; // ivar: _isUsingDefaultAccount
@property (retain, nonatomic) NSURL *mailtoURL; // ivar: _mailtoURL
@property (copy, nonatomic) NSString *messageBody; // ivar: _messageBody
@property (retain, nonatomic) NSArray *originalContent; // ivar: _originalContent
@property (copy, nonatomic) NSArray *photoIDs; // ivar: _photoIDs
@property (copy, nonatomic) NSString *preferredSendingEmailAddress; // ivar: _preferredSendingEmailAddress
@property (nonatomic) BOOL prefersFirstLineSelection; // ivar: _prefersFirstLineSelection
@property (copy, nonatomic) NSData *serializedMailboxObjectID; // ivar: _serializedMailboxObjectID
@property (copy, nonatomic) NSData *serializedMessageObjectID; // ivar: _serializedMessageObjectID
@property (copy, nonatomic) NSString *shareSheetSessionID; // ivar: _shareSheetSessionID
@property (nonatomic) BOOL showContentImmediately; // ivar: _showContentImmediately
@property (nonatomic) BOOL showKeyboardImmediately; // ivar: _showKeyboardImmediately
@property (nonatomic) int sourceAccountManagement; // ivar: _sourceAccountManagement
@property (copy, nonatomic) NSString *subject; // ivar: _subject
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *toRecipients; // ivar: _toRecipients


+(BOOL)supportsSecureCoding;
-(id)addContentVariationWithName:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(void)_processDictionaryRepresentation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif