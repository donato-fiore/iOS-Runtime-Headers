// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DSSHARINGPERSON_H
#define DSSHARINGPERSON_H

@class CNContact, NSMutableDictionary, NSString, NSMutableSet, NSMapTable, NSArray;

#import <Foundation/Foundation.h>


@interface DSSharingPerson : NSObject {
    CNContact *_contact;
    NSMutableDictionary *_sources;
    NSMutableDictionary *_participantsBySource;
    NSMutableDictionary *_sharedResourcesBySource;
    NSString *_identifier;
    NSMutableSet *_emailAddresses;
    NSMutableSet *_names;
    NSMutableSet *_phoneNumbers;
    NSMutableDictionary *_shareDirectionBySourceName;
    NSMapTable *_shareDirectionByResource;
}


@property (readonly, copy, nonatomic) NSArray *allSources;
@property (readonly, nonatomic) CNContact *contact;
@property (readonly, copy, nonatomic) NSString *displayGivenName;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *localizedDetail;
@property (readonly, nonatomic) NSInteger score;
@property (readonly, copy, nonatomic) NSArray *sortedSourceNames;


+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isMe:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)shareDirectionForSharedResource:(id)arg0 ;
-(NSUInteger)shareDirectionForSourceName:(id)arg0 ;
-(id)contactMatchingPredicates:(id)arg0 ;
-(id)initWithSource:(id)arg0 sharedResource:(id)arg1 participant:(id)arg2 deviceOwnerRole:(NSInteger)arg3 ;
-(id)sharedResourcesForSourceName:(id)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(void)addSource:(id)arg0 sharedResource:(id)arg1 participant:(id)arg2 deviceOwnerRole:(NSInteger)arg3 ;
-(void)removeParticipant:(id)arg0 fromSource:(id)arg1 ;
-(void)removeSource:(id)arg0 ;
-(void)stopAllSharingOnQueue:(id)arg0 completion:(id)arg1 ;
-(void)stopSharingSourceNames:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)stopSharingSources:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)updateContactFromParticipant:(id)arg0 ;
-(void)updateKnownEmailAddressesForParticipant:(id)arg0 ;
-(void)updateKnownNameForParticipant:(id)arg0 ;
-(void)updateKnownPhoneNumbersForParticipant:(id)arg0 ;
-(void)updateShareDirectionForParticipant:(id)arg0 source:(id)arg1 sharedResource:(id)arg2 deviceOwnerRole:(NSInteger)arg3 ;


@end


#endif