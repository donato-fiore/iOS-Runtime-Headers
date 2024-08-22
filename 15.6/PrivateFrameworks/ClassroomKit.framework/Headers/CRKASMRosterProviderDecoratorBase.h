// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKASMROSTERPROVIDERDECORATORBASE_H
#define CRKASMROSTERPROVIDERDECORATORBASE_H

@class NSString, NSArray;
@protocol CRKASMRosterProviding, CRKASMRoster, CRKASMUserFetching;

#import <Foundation/Foundation.h>


@interface CRKASMRosterProviderDecoratorBase : NSObject <CRKASMRosterProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *locationsWithManagePermissions;
@property (readonly, nonatomic, getter=isPopulated) BOOL populated;
@property (readonly, nonatomic) NSObject<CRKASMRoster> *roster;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<CRKASMRosterProviding> *underlyingRosterProvider; // ivar: _underlyingRosterProvider
@property (readonly, nonatomic) NSObject<CRKASMUserFetching> *userFetcher;


+(id)keyPathsForValuesAffectingLocationsWithManagePermissions;
+(id)keyPathsForValuesAffectingPopulated;
+(id)keyPathsForValuesAffectingRoster;
-(BOOL)ingestCertificates:(id)arg0 forTrustedUserIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)initWithRosterProvider:(id)arg0 ;
-(id)instructorDirectoryForLocationIDs:(id)arg0 ;
-(id)studentDirectoryForLocationIDs:(id)arg0 ;
-(void)createCourseWithProperties:(id)arg0 completion:(id)arg1 ;
-(void)refresh;
-(void)removeCourseWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)updateCourseWithIdentifier:(id)arg0 properties:(id)arg1 completion:(id)arg2 ;


@end


#endif