// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SDBETAMANAGER_H
#define SDBETAMANAGER_H

@class NSArray, NSDate;

#import <Foundation/Foundation.h>


@interface SDBetaManager : NSObject

@property (nonatomic) NSUInteger cachedPlatform; // ivar: _cachedPlatform
@property (retain, nonatomic) NSArray *cachedPrograms; // ivar: _cachedPrograms
@property (retain, nonatomic) NSDate *lastCached; // ivar: _lastCached


+(BOOL)_isEnrolledInBetaProgram;
+(id)sharedManager;
-(BOOL)_isEnrolledInBetaProgram;
-(BOOL)_unenrollFromBetaProgram;
-(BOOL)isCacheValidForPlatforms:(NSUInteger)arg0 ;
-(id)_assetServerURLString;
-(id)_brainServerURLString;
-(id)availableBetaProgramsForPlatforms:(NSUInteger)arg0 ;
-(id)membershipURL;
-(id)membershipURLForPlatforms:(NSUInteger)arg0 ;
-(id)saveResponse:(id)arg0 platforms:(NSUInteger)arg1 ;
-(id)serverURLWithPath:(id)arg0 arguments:(id)arg1 ;
-(id)verifyURLForCatalog:(id)arg0 ;
-(void)_enrollUsingSeedingConfiguration:(id)arg0 ;
-(void)_queryProgramsForSystemAccountsWithPlatforms:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)_resetAssetAudience;
-(void)_setAssetAudienceString:(id)arg0 ;
-(void)_setAssetServerURLString:(id)arg0 ;
-(void)_setBrainServerURLString:(id)arg0 ;
-(void)_setMemberEnrolled:(BOOL)arg0 ;
-(void)_synchronizeCFPreferences;
-(void)enrollDevice:(id)arg0 inBetaProgram:(id)arg1 completion:(id)arg2 ;
-(void)isDeviceEnrolledInBetaProgram:(id)arg0 completion:(id)arg1 ;
-(void)queryProgramsForSystemAccountsWithPlatforms:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)savePrograms:(id)arg0 forPlatforms:(NSUInteger)arg1 ;
-(void)unenrollDevice:(id)arg0 completion:(id)arg1 ;
-(void)verifyCatalog:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif