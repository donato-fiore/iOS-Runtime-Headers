// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCUISPECIFIERPROVIDER_H
#define MCUISPECIFIERPROVIDER_H

@class NSDictionary;
@protocol MCUISpecifierProviderDelegate;

#import <Foundation/Foundation.h>


@interface MCUISpecifierProvider : NSObject

@property (weak, nonatomic) NSObject<MCUISpecifierProviderDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSDictionary *sharedPSProperties; // ivar: _sharedPSProperties


-(BOOL)isSectionPopulated:(id)arg0 outIsPlural:(*BOOL)arg1 ;
-(id)_declarativeManagementProfileIdentifiers;
-(id)_specifierForProfile:(id)arg0 profileInstalled:(BOOL)arg1 ;
-(id)_specifiersForProfiles:(id)arg0 singularHeader:(id)arg1 pluralHeaader:(id)arg2 profilesInstalled:(BOOL)arg3 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)specifierWithName:(id)arg0 detail:(Class)arg1 ;
-(id)specifiersForInstalledProfiles:(id)arg0 ;
-(id)specifiersForMDMProfiles:(id)arg0 ;
-(id)specifiersForUninstalledProfiles:(id)arg0 ;
-(void)loadProfileFromSpecifier:(id)arg0 ;


@end


#endif