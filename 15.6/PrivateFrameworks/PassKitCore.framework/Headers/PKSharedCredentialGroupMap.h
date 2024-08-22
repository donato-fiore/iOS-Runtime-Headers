// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSHAREDCREDENTIALGROUPMAP_H
#define PKSHAREDCREDENTIALGROUPMAP_H

@class NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>

#import "PKAppletSubcredential.h"

@interface PKSharedCredentialGroupMap : NSObject {
    NSMutableDictionary *_groupIdentifierToGroupNumber;
    NSMutableDictionary *_sharingSessionToGroupNumber;
    NSMutableDictionary *_recipientIdentifierToGroupNumber;
    NSMutableDictionary *_groupNumberToSharedCredentials;
    NSMutableDictionary *_groupNumberToInvitationReceipts;
    NSMutableArray *_notGroupedSharedCredentials;
    NSMutableArray *_notGroupedInvitationReceipts;
    NSInteger _groupCount;
    PKAppletSubcredential *_credential;
}




-(id)groupNumberWithGroupIdentifier:(id)arg0 sharingSessionIdentifier:(id)arg1 recipientIdentifier:(id)arg2 ;
-(id)groups;
-(id)initWithCredential:(id)arg0 ;
-(void)assignGroupNumber:(id)arg0 toGroupIdentifier:(id)arg1 sharingSessionIdentifier:(id)arg2 recipientIdentifier:(id)arg3 ;
-(void)insertInvitationReceipt:(id)arg0 ;
-(void)insertInvitationReceipt:(id)arg0 intoGroup:(id)arg1 ;
-(void)insertSharedCredential:(id)arg0 ;
-(void)insertSharedCredential:(id)arg0 intoGroup:(id)arg1 ;


@end


#endif