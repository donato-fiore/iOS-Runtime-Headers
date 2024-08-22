// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFCONTACTCONTROLLER_H
#define HFCONTACTCONTROLLER_H

@class NSArray, NSMutableArray, NSDictionary, NSMutableDictionary;
@protocol HFContactControllerDelegate;

#import <Foundation/Foundation.h>


@interface HFContactController : NSObject

@property (weak, nonatomic) NSObject<HFContactControllerDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSArray *descriptors; // ivar: _descriptors
@property (retain, nonatomic) NSMutableArray *familyMemberCallbacks; // ivar: _familyMemberCallbacks
@property (copy, nonatomic) NSDictionary *familyMemberDsidToContact; // ivar: _familyMemberDsidToContact
@property (copy, nonatomic) NSArray *familyMembers; // ivar: _familyMembers
@property (nonatomic) NSUInteger familyMembersState; // ivar: _familyMembersState
@property (readonly, copy, nonatomic) NSArray *pendingDestinations;
@property (retain, nonatomic) NSMutableDictionary *recipientAvailabilities; // ivar: _recipientAvailabilities


+(id)contactForAppleID:(id)arg0 keyDescriptors:(id)arg1 ;
+(id)contactForEmailAddress:(id)arg0 keyDescriptors:(id)arg1 ;
+(id)contactForPhoneNumber:(id)arg0 keyDescriptors:(id)arg1 ;
+(id)stringForRecipientStatus:(NSUInteger)arg0 ;
-(NSUInteger)statusForDestination:(id)arg0 ;
-(id)_contactForFamilyMember:(id)arg0 ;
-(id)contactForFamilyMemberWithDsid:(id)arg0 ;
-(id)init;
-(id)initWithKeyDescriptors:(id)arg0 ;
-(void)_downloadFamilyMemberPhotos;
-(void)_loadFamilyMembersWithCompletion:(id)arg0 ;
-(void)entriesUpdated:(id)arg0 ;
-(void)fetchFamilyMembersWithCompletion:(id)arg0 ;
-(void)markDestinationsPending:(id)arg0 ;


@end


#endif