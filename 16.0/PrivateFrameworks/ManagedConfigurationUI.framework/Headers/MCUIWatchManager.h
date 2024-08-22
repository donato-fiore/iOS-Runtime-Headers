// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCUIWATCHMANAGER_H
#define MCUIWATCHMANAGER_H

@class NSArray, NSSManager;

#import <Foundation/Foundation.h>


@interface MCUIWatchManager : NSObject

@property (retain, nonatomic) NSArray *configProfiles; // ivar: _configProfiles
@property (nonatomic) NSUInteger fetchStatus; // ivar: _fetchStatus
@property (retain, nonatomic) NSArray *mdmProfiles; // ivar: _mdmProfiles
@property (retain, nonatomic) NSSManager *nssManager; // ivar: _nssManager
@property (readonly, nonatomic) NSInteger profileCount;


+(id)shared;
-(id)init;
-(void)_fetchProfiles;
-(void)_handleFetchProfilesError:(id)arg0 ;
-(void)_watchChanged:(id)arg0 ;
-(void)fetchProfileIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)installProfileData:(id)arg0 completion:(id)arg1 ;
-(void)removeProfileIdentifier:(id)arg0 completion:(id)arg1 ;


@end


#endif