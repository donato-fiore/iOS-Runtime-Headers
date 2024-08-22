// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BPSWATCHMIGRATIONCONTROLLER_H
#define BPSWATCHMIGRATIONCONTROLLER_H

@class NSString, NSArray;
@protocol BPSWatchMigrationControllerDelegate;


#import "BPSWelcomeOptinViewController.h"

@interface BPSWatchMigrationController : BPSWelcomeOptinViewController

@property (nonatomic) BOOL iTunes; // ivar: _iTunes
@property (retain, nonatomic) NSString *localizedDetailText; // ivar: _localizedDetailText
@property (retain, nonatomic) NSArray *migratableDevices; // ivar: _migratableDevices
@property (weak, nonatomic) NSObject<BPSWatchMigrationControllerDelegate> *migrationDelegate; // ivar: _migrationDelegate
@property (retain, nonatomic) NSString *sourceDeviceName; // ivar: _sourceDeviceName


-(BOOL)shouldBeDisplayedGivenMigrationData:(id)arg0 ;
-(BOOL)useBridgeStyling;
-(id)alternateButtonTitle;
-(id)detailString;
-(id)imageResource;
-(id)imageResourceBundleIdentifier;
-(id)init;
-(id)initWithSnapshot:(id)arg0 ;
-(id)initWithSourceDeviceName:(id)arg0 ;
-(id)suggestedButtonTitle;
-(id)titleString;
-(void)_notifyDelegateShouldMigrateWithData:(id)arg0 ;
-(void)_saveMigrationPreference:(BOOL)arg0 ;
-(void)alternateButtonPressed:(id)arg0 ;
-(void)loadView;
-(void)suggestedButtonPressed:(id)arg0 ;


@end


#endif