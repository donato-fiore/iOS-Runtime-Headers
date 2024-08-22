// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXSTABLECONTACTREPRESENTATIONDATASTORE_H
#define ATXSTABLECONTACTREPRESENTATIONDATASTORE_H

@class CNContactStore;
@protocol ATXStableContactRepresentationProviderProtocol;

#import <Foundation/Foundation.h>

#import "ATXStableContactRepresentationDatabase.h"

@interface ATXStableContactRepresentationDatastore : NSObject <ATXStableContactRepresentationProviderProtocol>

 {
    ATXStableContactRepresentationDatabase *_stableContactRepresentationDatabase;
    CNContactStore *_contactStore;
}




-(id)cnContactForCnContactId:(id)arg0 rawIdentifier:(id)arg1 ;
-(id)cnContactIdWithStableContactIdentifier:(id)arg0 ;
-(id)contactInfoDictionaryWithContactId:(id)arg0 rawIdentifier:(id)arg1 ;
-(id)init;
-(id)initWithStableContactRepresentationDatabase:(id)arg0 ;
-(id)initWithStableContactRepresentationDatabase:(id)arg0 contactStore:(id)arg1 ;
-(id)refreshCnContactIdsGivenContactEntities:(id)arg0 ;
-(id)stableContactIdentifierWithCnContactId:(id)arg0 ;
-(id)stableContactRepresentationForCnContactId:(id)arg0 rawIdentifier:(id)arg1 ;
-(id)stableContactRepresentationForStableContactIdentifier:(id)arg0 ;
-(id)updateAndGetStableContactIdentifier:(id)arg0 rawIdentifier:(id)arg1 ;
-(void)insertCnContactIdToStableContactIdentifierWithCnContactId:(id)arg0 stableContactIdentifier:(id)arg1 ;


@end


#endif