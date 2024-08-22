// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PSSUGGESTION_H
#define _PSSUGGESTION_H

@class NSString, INImage, NSDictionary, NSArray, NSNumber;
@protocol NSSecureCoding, ATXSuggestionExecutableProtocol;

#import <Foundation/Foundation.h>


@interface _PSSuggestion : NSObject <NSSecureCoding, ATXSuggestionExecutableProtocol>



@property (retain, nonatomic) NSString *adaptedModelRecipeID; // ivar: _adaptedModelRecipeID
@property (readonly, copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, copy, nonatomic) NSString *conversationIdentifier; // ivar: _conversationIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *derivedIntentIdentifier; // ivar: _derivedIntentIdentifier
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL familySuggestion; // ivar: _familySuggestion
@property (readonly, copy, nonatomic) NSString *groupName; // ivar: _groupName
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) INImage *image; // ivar: _image
@property (nonatomic) BOOL isAdaptedModelCreated; // ivar: _isAdaptedModelCreated
@property (nonatomic) BOOL isAdaptedModelUsed; // ivar: _isAdaptedModelUsed
@property (copy, nonatomic) NSString *messagesGroupIdentifier; // ivar: _messagesGroupIdentifier
@property (retain, nonatomic) NSDictionary *modelSuggestionProxies; // ivar: _modelSuggestionProxies
@property (copy, nonatomic) NSString *reason; // ivar: _reason
@property (copy, nonatomic) NSString *reasonType; // ivar: _reasonType
@property (copy, nonatomic) NSArray *recipients; // ivar: _recipients
@property (readonly, copy, nonatomic) NSNumber *score; // ivar: _score
@property (nonatomic) NSInteger suggestionType; // ivar: _suggestionType
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *supportedBundleIDs; // ivar: _supportedBundleIDs
@property (copy, nonatomic) NSString *trialID; // ivar: _trialID
@property (retain, nonatomic) NSString *utiList; // ivar: _utiList


+(BOOL)supportsSecureCoding;
+(id)suggestionForBundleID:(id)arg0 derivedIntentIdentifier:(id)arg1 knowledgeStore:(id)arg2 contactResolver:(id)arg3 reason:(id)arg4 reasonType:(id)arg5 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithBundleID:(id)arg0 conversationIdentifier:(id)arg1 groupName:(id)arg2 recipients:(id)arg3 ;
-(id)initWithBundleID:(id)arg0 conversationIdentifier:(id)arg1 groupName:(id)arg2 recipients:(id)arg3 derivedIntentIdentifier:(id)arg4 image:(id)arg5 reason:(id)arg6 reasonType:(id)arg7 score:(id)arg8 ;
-(id)initWithBundleID:(id)arg0 conversationIdentifier:(id)arg1 groupName:(id)arg2 recipients:(id)arg3 derivedIntentIdentifier:(id)arg4 image:(id)arg5 reason:(id)arg6 reasonType:(id)arg7 score:(id)arg8 familySuggestion:(BOOL)arg9 ;
-(id)initWithBundleID:(id)arg0 conversationIdentifier:(id)arg1 groupName:(id)arg2 recipients:(id)arg3 reason:(id)arg4 reasonType:(id)arg5 ;
-(id)initWithBundleID:(id)arg0 conversationIdentifier:(id)arg1 groupName:(id)arg2 recipients:(id)arg3 reason:(id)arg4 reasonType:(id)arg5 score:(id)arg6 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif