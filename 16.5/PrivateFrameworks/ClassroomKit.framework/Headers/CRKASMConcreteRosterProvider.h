// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKASMCONCRETEROSTERPROVIDER_H
#define CRKASMCONCRETEROSTERPROVIDER_H

@class NSString, NSArray;
@protocol CRKClassKitChangeNotifierDelegate, CRKASMRosterProviding, CRKASMRoster, CRKASMUserFetching;

#import <Foundation/Foundation.h>

#import "CRKASMCertificateIngestor.h"
#import "CRKClassKitChangeNotifier.h"
#import "CRKASMRosterProviderEnvironment.h"
#import "CRKASMRosterUpdater.h"
#import "CRKASMWorldBuildOperation.h"

@interface CRKASMConcreteRosterProvider : NSObject <CRKClassKitChangeNotifierDelegate, CRKASMRosterProviding>



@property (readonly, nonatomic) CRKASMCertificateIngestor *certificateIngestor; // ivar: _certificateIngestor
@property (readonly, nonatomic) CRKClassKitChangeNotifier *classKitChangeNotifier; // ivar: _classKitChangeNotifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CRKASMRosterProviderEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *locations; // ivar: _locations
@property (copy, nonatomic) NSArray *locationsWithManagePermissions; // ivar: _locationsWithManagePermissions
@property (nonatomic, getter=isPopulated) BOOL populated; // ivar: _populated
@property (retain, nonatomic) NSObject<CRKASMRoster> *roster; // ivar: _roster
@property (readonly, nonatomic) CRKASMRosterUpdater *rosterUpdater; // ivar: _rosterUpdater
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<CRKASMUserFetching> *userFetcher;
@property (retain, nonatomic) CRKASMWorldBuildOperation *worldBuildOperation; // ivar: _worldBuildOperation


+(id)instructorRosterProvider;
+(id)studentRosterProvider;
-(BOOL)ingestCertificates:(id)arg0 forTrustedUserIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)instructorDirectoryForLocationIDs:(id)arg0 ;
-(id)studentDirectoryForLocationIDs:(id)arg0 ;
-(void)createCourseWithProperties:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)logDurationOfOperation:(id)arg0 ;
-(void)notifierDidObserveClassKitChange:(id)arg0 ;
-(void)processFinishedWorldBuild:(id)arg0 ;
-(void)refresh;
-(void)removeCourseWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)startNewWorldBuild;
-(void)updateCourseWithIdentifier:(id)arg0 properties:(id)arg1 completion:(id)arg2 ;
-(void)updateManageableLocations:(id)arg0 ;
-(void)updateRoster:(id)arg0 outTrustedPersonIDsChanged:(*BOOL)arg1 ;
-(void)worldBuildDidFinish:(id)arg0 ;


@end


#endif