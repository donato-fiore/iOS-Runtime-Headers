// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKASMSUSPENDABLEROSTERPROVIDER_H
#define CRKASMSUSPENDABLEROSTERPROVIDER_H

@class NSString, NSArray;
@protocol CRKASMUserFetching, CRKASMUserDirectory, CRKASMUserDirectoryIterator, CRKASMRosterProviding, CRKASMRoster;

#import <Foundation/Foundation.h>


@interface CRKASMSuspendableRosterProvider : NSObject <CRKASMUserFetching, CRKASMUserDirectory, CRKASMUserDirectoryIterator, CRKASMRosterProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id *generator; // ivar: _generator
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *locationsWithManagePermissions; // ivar: _locationsWithManagePermissions
@property (nonatomic, getter=isPopulated) BOOL populated; // ivar: _populated
@property (retain, nonatomic) NSObject<CRKASMRoster> *roster; // ivar: _roster
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<CRKASMRosterProviding> *underlyingRosterProvider; // ivar: _underlyingRosterProvider
@property (readonly, nonatomic) NSObject<CRKASMUserFetching> *userFetcher;


-(BOOL)hasRosterProvider;
-(BOOL)ingestCertificates:(id)arg0 forTrustedUserIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)initWithGenerator:(id)arg0 ;
-(id)instructorDirectoryForLocationIDs:(id)arg0 ;
-(id)iteratorForSearchString:(id)arg0 sortingGivenNameFirst:(BOOL)arg1 pageSize:(NSInteger)arg2 ;
-(id)noRosterProviderError;
-(id)observedKeyPaths;
-(id)studentDirectoryForLocationIDs:(id)arg0 ;
-(void)createCourseWithProperties:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)fetchASMUsersWithIdentifiers:(id)arg0 completion:(id)arg1 ;
-(void)fetchNextUsersWithCompletion:(id)arg0 ;
-(void)latchDefaultValues;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)refresh;
-(void)removeCourseWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)resume;
-(void)startObservingUnderlyingProvider;
-(void)stopObservingUnderlyingProvider;
-(void)suspend;
-(void)updateCourseWithIdentifier:(id)arg0 properties:(id)arg1 completion:(id)arg2 ;


@end


#endif