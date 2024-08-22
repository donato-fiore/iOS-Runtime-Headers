// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNCONTACTSUGGESTIONMATCH_H
#define CNCONTACTSUGGESTIONMATCH_H

@class SGContact, SGContactMatch, NSString;

#import <Foundation/Foundation.h>


@interface CNContactSuggestionMatch : NSObject

@property (retain, nonatomic) SGContact *contact; // ivar: _contact
@property (retain, nonatomic) SGContactMatch *contactMatch; // ivar: _contactMatch
@property (retain, nonatomic) NSString *mainStoreLinkedIdentifier; // ivar: _mainStoreLinkedIdentifier


+(id)suggestionFromContactMatch:(id)arg0 ;
+(void)fetchLinkedIdentifiersForContactSuggestionMatches:(id)arg0 fromSuggestionService:(id)arg1 ;


@end


#endif