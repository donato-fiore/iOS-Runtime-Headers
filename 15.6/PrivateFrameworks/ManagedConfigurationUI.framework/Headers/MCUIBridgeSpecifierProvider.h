// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCUIBRIDGESPECIFIERPROVIDER_H
#define MCUIBRIDGESPECIFIERPROVIDER_H

@class NSArray, NSSManager;


#import "MCUISpecifierProvider.h"

@interface MCUIBridgeSpecifierProvider : MCUISpecifierProvider

@property (retain, nonatomic) NSArray *installedProfiles; // ivar: _installedProfiles
@property (retain, nonatomic) NSArray *mdmProfiles; // ivar: _mdmProfiles
@property (retain, nonatomic) NSSManager *nssManager; // ivar: _nssManager
@property (nonatomic) NSUInteger watchFetchStatus; // ivar: _watchFetchStatus


-(id)_emptySpecifier;
-(id)_specifiersForWatchProfiles;
-(id)initWithDelegate:(id)arg0 ;
-(id)specifiers;
-(void)_handleWatchFetchError;
-(void)_handleWatchFetchSuccessWithReply:(id)arg0 ;
-(void)fetchWatchProfileList;
-(void)loadProfileFromSpecifier:(id)arg0 ;


@end


#endif