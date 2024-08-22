// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BPSWATCHMIGRATIONCONTROLLER_H
#define BPSWATCHMIGRATIONCONTROLLER_H

@class UIViewController, NSArray, NSString;
@protocol BPSWatchMigrationControllerDelegate;


#import "BPSMultipleWatchMigrationView.h"
#import "BPSRemoteWatchView.h"

@interface BPSWatchMigrationController : UIViewController

@property (nonatomic) BOOL iTunes; // ivar: _iTunes
@property (retain, nonatomic) NSArray *migratableDevices; // ivar: _migratableDevices
@property (weak, nonatomic) NSObject<BPSWatchMigrationControllerDelegate> *migrationDelegate; // ivar: _migrationDelegate
@property (retain, nonatomic) BPSMultipleWatchMigrationView *multipleWatchView; // ivar: _multipleWatchView
@property (retain, nonatomic) NSString *sourceDeviceName; // ivar: _sourceDeviceName
@property (retain, nonatomic) BPSRemoteWatchView *watchView; // ivar: _watchView


-(BOOL)shouldBeDisplayedGivenMigrationData:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithSnapshot:(id)arg0 ;
-(id)initWithSourceDeviceName:(id)arg0 ;
-(void)_notifyDelegateShouldMigrateWithData:(id)arg0 ;
-(void)_saveMigrationPreference:(BOOL)arg0 ;
-(void)loadView;


@end


#endif