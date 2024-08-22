// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UNCNCONTACTRESOLVER_H
#define _UNCNCONTACTRESOLVER_H

@class CNContactStore, NSArray;

#import <Foundation/Foundation.h>


@interface _UNCNContactResolver : NSObject {
    CNContactStore *_contactStore;
    NSArray *_contactStoreSearchKeys;
}




-(BOOL)_isSuggestedForContact:(id)arg0 ;
-(BOOL)_isSuggestedForLabeledValue:(id)arg0 ;
-(id)_fullnameForCNContact:(id)arg0 ;
-(id)_matchForContact:(id)arg0 matchingLabel:(id)arg1 matchType:(NSUInteger)arg2 ;
-(id)_matchThatMatchesEmailAddress:(id)arg0 forContact:(id)arg1 ;
-(id)_matchThatMatchesSocialProfile:(id)arg0 bundleIdentifier:(id)arg1 forContact:(id)arg2 ;
-(id)bestMatchForEmailAddress:(id)arg0 ;
-(id)bestMatchForPhoneNumber:(id)arg0 ;
-(id)bestMatchForPredicate:(id)arg0 contactToMatch:(id)arg1 ;
-(id)bestMatchForSocialProfile:(id)arg0 bundleIdentifier:(id)arg1 ;
-(id)bestMatchForUserIdentifier:(id)arg0 bundleIdentifier:(id)arg1 ;
-(id)bestMatchForUsername:(id)arg0 bundleIdentifier:(id)arg1 ;
-(id)confirm:(BOOL)arg0 match:(id)arg1 ;
-(id)contactForIdentifier:(id)arg0 ;
-(id)init;
-(id)matchThatMatchesPhoneNumber:(id)arg0 forContact:(id)arg1 ;
-(id)resultForContactIdentifier:(id)arg0 ;
-(id)resultForContactIdentifier:(id)arg0 emailAddress:(id)arg1 phoneNumber:(id)arg2 userIdentifier:(id)arg3 username:(id)arg4 bundleIdentifier:(id)arg5 ;


@end


#endif