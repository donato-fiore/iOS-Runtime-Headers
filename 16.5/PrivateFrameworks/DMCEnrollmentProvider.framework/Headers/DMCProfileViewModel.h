// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMCPROFILEVIEWMODEL_H
#define DMCPROFILEVIEWMODEL_H

@class NSArray, NSString, MCProfile;

#import <Foundation/Foundation.h>


@interface DMCProfileViewModel : NSObject

@property (readonly, nonatomic) NSArray *accountSections; // ivar: _accountSections
@property (readonly, nonatomic) NSArray *byodInfoSections; // ivar: _byodInfoSections
@property (readonly, nonatomic) NSArray *elevatedPayloadTypes; // ivar: _elevatedPayloadTypes
@property (nonatomic) NSInteger finalInstallationWarningStyle; // ivar: _finalInstallationWarningStyle
@property (readonly, nonatomic) NSArray *managedAppSections; // ivar: _managedAppSections
@property (copy, nonatomic) NSString *managedAppleID; // ivar: _managedAppleID
@property (readonly, nonatomic) NSArray *managedBookSections; // ivar: _managedBookSections
@property (readonly, nonatomic) NSArray *moreDetailsSections; // ivar: _moreDetailsSections
@property (readonly, nonatomic) NSArray *payloadInfoSectionSummaries; // ivar: _payloadInfoSectionSummaries
@property (readonly, nonatomic) MCProfile *profile; // ivar: _profile
@property (readonly, nonatomic) NSArray *restrictionSections; // ivar: _restrictionSections
@property (nonatomic) BOOL showManagedPayloads; // ivar: _showManagedPayloads


+(id)trustTextForProfile:(id)arg0 outIsTrusted:(*BOOL)arg1 ;
-(BOOL)isInstalledMDMProfile;
-(BOOL)isMDMProfile;
-(BOOL)managesAppID:(id)arg0 ;
-(BOOL)managesBook:(id)arg0 ;
-(NSInteger)_numberOfItemsInSectionsArray:(id)arg0 ;
-(NSInteger)numberOfAccounts;
-(NSInteger)numberOfManagedApps;
-(NSInteger)numberOfManagedBooks;
-(NSInteger)numberOfRestrictions;
-(id)_localizedPayloadSummaryByType:(id)arg0 ;
-(id)_signedByStringFromProfile:(id)arg0 ;
-(id)_sortedPayloads:(id)arg0 ;
-(id)_warningTextFromPayload:(id)arg0 ;
-(id)initWithProfile:(id)arg0 managedPayloads:(BOOL)arg1 ;
-(void)_addObjectsOfClass:(Class)arg0 fromArray:(id)arg1 toArray:(id)arg2 ;
-(void)_determineAvailableElevatedPayloadInfoTypes;
-(void)_managedAppsChanged:(id)arg0 ;
-(void)_managedBooksChanged:(id)arg0 ;
-(void)_profilesUpdated:(id)arg0 ;
-(void)dealloc;
-(void)reloadProfile:(id)arg0 ;


@end


#endif