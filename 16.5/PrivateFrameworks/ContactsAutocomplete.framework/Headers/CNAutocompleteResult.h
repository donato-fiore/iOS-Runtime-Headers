// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNAUTOCOMPLETERESULT_H
#define CNAUTOCOMPLETERESULT_H

@class NSString, NSArray, _PSSuggestion, NSNumber, NSDictionary;

#import <Foundation/Foundation.h>

#import "CNAutocompleteNameComponents.h"
#import "CNAutocompleteResultValue.h"

@interface CNAutocompleteResult : NSObject {
    BOOL _hasPrefixMatch;
    NSString *_descriptionMemo;
}


@property (readonly, copy) id *address;
@property (readonly) NSInteger addressType;
@property (readonly, copy) NSString *contactIdentifier;
@property (copy, nonatomic) id *contactProvider; // ivar: _contactProvider
@property (copy, nonatomic) NSArray *diagnosticLogs; // ivar: _diagnosticLogs
@property (copy) NSString *displayName; // ivar: _displayName
@property (readonly, copy) NSString *groupIdentifier;
@property BOOL hasPreferredDomain; // ivar: _hasPreferredDomain
@property (copy) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) id *ignoreResultBlock; // ivar: _ignoreResultBlock
@property (copy) NSString *lastSendingAddress; // ivar: _lastSendingAddress
@property (copy, nonatomic) id *membersProvider; // ivar: _membersProvider
@property (copy) CNAutocompleteNameComponents *nameComponents; // ivar: _nameComponents
@property (retain) _PSSuggestion *psSuggestion; // ivar: _psSuggestion
@property (retain, nonatomic) NSNumber *recentsIdentifier; // ivar: _recentsIdentifier
@property NSInteger resultType; // ivar: _resultType
@property NSUInteger sourceType; // ivar: _sourceType
@property (copy) NSDictionary *userInfo; // ivar: _userInfo
@property (readonly, copy) NSArray *userInfos;
@property (retain) CNAutocompleteResultValue *value; // ivar: _value


+(BOOL)isSourceTypeConsideredSuggestion:(NSUInteger)arg0 ;
+(NSUInteger)category;
+(id)calDAVResultWithAddress:(id)arg0 displayName:(id)arg1 nameComponents:(id)arg2 ;
+(id)calDAVResultWithAddress:(id)arg0 displayName:(id)arg1 nameComponents:(id)arg2 resultType:(NSInteger)arg3 groupMembersProvider:(id)arg4 ;
// +(id)calDAVResultWithAddress:(id)arg0 displayName:(id)arg1 nameComponents:(id)arg2 resultType:(NSInteger)arg3 groupMembersProvider:(id)arg4 userInfo:(unk)arg5  ;
+(id)comparators;
+(id)contactResultWithDisplayName:(id)arg0 value:(id)arg1 nameComponents:(id)arg2 identifier:(id)arg3 ;
+(id)contactStoreForFetchingFullContacts;
+(id)groupResultWithDisplayName:(id)arg0 identifier:(id)arg1 ;
+(id)localeForHashing;
// +(id)messagesResultWithAddress:(id)arg0 displayName:(id)arg1 nameComponents:(id)arg2 resultType:(NSInteger)arg3 addressType:(NSInteger)arg4 identifier:(id)arg5 contactProvider:(id)arg6 groupMembersProvider:(unk)arg7 userInfo:(id)arg8  ;
// +(id)messagesResultWithAddress:(id)arg0 displayName:(id)arg1 nameComponents:(id)arg2 resultType:(NSInteger)arg3 groupMembersProvider:(id)arg4 userInfo:(unk)arg5  ;
+(id)resultWithDisplayName:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldUseGroupNamingForResult;
-(BOOL)shouldUseGroupNamingForSource;
-(NSInteger)compare:(id)arg0 ;
-(NSInteger)compare:(id)arg0 withPriorityComparator:(id)arg1 ;
-(NSUInteger)hash;
-(id)contactWithKeysToFetch:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)diagnosticLog;
-(id)expandMembers;
-(id)init;
-(id)members:(*id)arg0 ;
-(id)stringForHashing;
-(void)addDiagnosticLog:(id)arg0 ;
-(void)addDiagnosticLogFuture:(id)arg0 ;
-(void)updateUsingInformationFromRelatedResult:(id)arg0 ;


@end


#endif