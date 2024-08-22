// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INSEARCHFORMESSAGESINTENT_H
#define INSEARCHFORMESSAGESINTENT_H

@class NSArray, NSString;
@protocol INSearchForMessagesIntentExport;


#import "INIntent.h"
#import "INDateComponentsRange.h"

@interface INSearchForMessagesIntent : INIntent <INSearchForMessagesIntentExport>



@property (readonly, nonatomic) NSUInteger attributes;
@property (readonly, copy, nonatomic) NSArray *conversationIdentifiers;
@property (readonly, nonatomic) NSInteger conversationIdentifiersOperator;
@property (readonly, copy, nonatomic) INDateComponentsRange *dateTimeRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *identifiers;
@property (readonly, nonatomic) NSInteger identifiersOperator;
@property (readonly, copy, nonatomic) NSArray *notificationIdentifiers;
@property (readonly, nonatomic) NSInteger notificationIdentifiersOperator;
@property (readonly, copy, nonatomic) NSArray *recipients;
@property (readonly, nonatomic) NSInteger recipientsOperator;
@property (readonly, copy, nonatomic) NSArray *searchTerms;
@property (readonly, nonatomic) NSInteger searchTermsOperator;
@property (readonly, copy, nonatomic) NSArray *senders;
@property (readonly, nonatomic) NSInteger sendersOperator;
@property (readonly, copy, nonatomic) NSArray *speakableGroupNames;
@property (readonly, nonatomic) NSInteger speakableGroupNamesOperator;
@property (readonly) Class superclass;


-(NSInteger)_intentCategory;
-(NSInteger)contentsOperator;
-(NSInteger)groupNamesOperator;
-(id)_categoryVerb;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)attributeSet;
-(id)contentPredicate;
-(id)contents;
-(id)domain;
-(id)groupNames;
-(id)initWithRecipients:(id)arg0 senders:(id)arg1 contents:(id)arg2 attributes:(NSUInteger)arg3 dateTimeRange:(id)arg4 identifiers:(id)arg5 ;
-(id)initWithRecipients:(id)arg0 senders:(id)arg1 contents:(id)arg2 attributes:(NSUInteger)arg3 dateTimeRange:(id)arg4 identifiers:(id)arg5 notificationIdentifiers:(id)arg6 ;
-(id)initWithRecipients:(id)arg0 senders:(id)arg1 searchTerms:(id)arg2 attributes:(NSUInteger)arg3 dateTimeRange:(id)arg4 identifiers:(id)arg5 notificationIdentifiers:(id)arg6 groupNames:(id)arg7 ;
-(id)initWithRecipients:(id)arg0 senders:(id)arg1 searchTerms:(id)arg2 attributes:(NSUInteger)arg3 dateTimeRange:(id)arg4 identifiers:(id)arg5 notificationIdentifiers:(id)arg6 speakableGroupNames:(id)arg7 ;
-(id)initWithRecipients:(id)arg0 senders:(id)arg1 searchTerms:(id)arg2 attributes:(NSUInteger)arg3 dateTimeRange:(id)arg4 identifiers:(id)arg5 notificationIdentifiers:(id)arg6 speakableGroupNames:(id)arg7 conversationIdentifiers:(id)arg8 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setContents:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setGroupNames:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif