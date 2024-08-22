// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRSWITCHERCONFIGURATION_H
#define PRSWITCHERCONFIGURATION_H

@class NSMapTable, NSArray, NSString;
@protocol NSMutableCopying, PRPosterContentSnapshotProviding;

#import <Foundation/Foundation.h>

#import "PRPosterConfiguration.h"

@interface PRSwitcherConfiguration : NSObject <NSMutableCopying, PRPosterContentSnapshotProviding>



@property (retain, nonatomic) PRPosterConfiguration *activeConfiguration; // ivar: _activeConfiguration
@property (nonatomic) BOOL activeConfigurationDueToIncomingFocusModeChange; // ivar: _activeConfigurationDueToIncomingFocusModeChange
@property (readonly, nonatomic) NSMapTable *associatedHomeScreenConfigurationsForServerIdentity; // ivar: _associatedHomeScreenConfigurationsForServerIdentity
@property (copy, nonatomic) NSArray *configurations; // ivar: _configurations
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PRPosterConfiguration *selectedConfiguration; // ivar: _selectedConfiguration
@property (readonly, weak, nonatomic) NSObject<PRPosterContentSnapshotProviding> *snapshotProvider; // ivar: _snapshotProvider
@property (readonly) Class superclass;


-(id)_childPosterConfigurationForConfiguration:(id)arg0 ;
-(id)_childPosterConfigurationForConfigurationUUID:(id)arg0 ;
-(id)_initWithConfigurations:(id)arg0 selectedConfiguration:(id)arg1 activeConfiguration:(id)arg2 associatedHomeScreenConfigurations:(id)arg3 snapshotProvider:(id)arg4 ;
-(id)_posterConfigurationForUUID:(id)arg0 ;
-(id)focusConfigurationForPoster:(id)arg0 ;
-(id)heldAssociatedConfigurations;
-(id)homeConfigurationForPoster:(id)arg0 ;
-(id)homeScreenPosterConfigurationForPosterConfiguration:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)primaryPosterIdentityForHomeScreenPosterConfiguration:(id)arg0 ;
-(void)fetchSnapshotForConfiguration:(id)arg0 compatibleWithTraitCollection:(id)arg1 completion:(id)arg2 ;


@end


#endif