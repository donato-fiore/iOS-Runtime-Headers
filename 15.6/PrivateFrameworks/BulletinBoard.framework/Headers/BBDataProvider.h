// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BBDATAPROVIDER_H
#define BBDATAPROVIDER_H

@class NSString;
@protocol BBSectionIdentity;

#import <Foundation/Foundation.h>

#import "BBDataProviderIdentity.h"

@interface BBDataProvider : NSObject <BBSectionIdentity>

 {
    BBDataProviderIdentity *_identity;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) BBDataProviderIdentity *identity;
@property (readonly) Class superclass;


-(BOOL)canClearAllBulletins;
-(BOOL)canClearBulletinsByDate;
-(BOOL)canPerformMigration;
-(BOOL)initialized;
-(BOOL)migrateSectionInfo:(id)arg0 oldSectionInfo:(id)arg1 ;
-(BOOL)syncsBulletinDismissal;
-(id)debugDescriptionWithChildren:(NSUInteger)arg0 ;
-(id)defaultSectionInfo;
-(id)defaultSubsectionInfos;
-(id)displayNameForSubsectionID:(id)arg0 ;
-(id)parentSectionIdentifier;
-(id)sectionBundlePath;
-(id)sectionDisplayName;
-(id)sectionIcon;
-(id)sectionIdentifier;
-(id)sectionParameters;
-(id)sortDescriptors;
-(id)sortKey;
-(id)universalSectionIdentifier;
-(void)bulletinsWithRequestParameters:(id)arg0 lastCleared:(id)arg1 completion:(id)arg2 ;
-(void)clearedInfoForBulletins:(id)arg0 lastClearedInfo:(id)arg1 completion:(id)arg2 ;
-(void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg0 completion:(id)arg1 ;
-(void)clearedInfoForClearingBulletinsFromDate:(id)arg0 toDate:(id)arg1 lastClearedInfo:(id)arg2 completion:(id)arg3 ;
-(void)dataProviderDidLoad;
-(void)deliverMessageWithName:(id)arg0 userInfo:(id)arg1 ;
-(void)deliverResponse:(id)arg0 forBulletinRequest:(id)arg1 withCompletion:(id)arg2 ;
-(void)invalidate;
-(void)noteSectionInfoDidChange:(id)arg0 ;
-(void)reloadIdentityWithCompletion:(id)arg0 ;
-(void)startWatchdog;
// -(void)updateClearedInfoWithClearedInfo:(id)arg0 handler:(id)arg1 completion:(unk)arg2  ;
// -(void)updateSectionInfoWithSectionInfo:(id)arg0 handler:(id)arg1 completion:(unk)arg2  ;


@end


#endif