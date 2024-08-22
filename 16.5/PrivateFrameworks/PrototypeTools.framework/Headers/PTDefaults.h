// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTDEFAULTS_H
#define PTDEFAULTS_H

@class BSAbstractDefaultDomain, NSString;



@interface PTDefaults : BSAbstractDefaultDomain

@property (nonatomic) BOOL activePrototypingEnabled;
@property (nonatomic) BOOL prototypeSettingsEnabled;
@property (nonatomic) BOOL remotePrototypingEnabled;
@property (nonatomic) BOOL ringerSwitchShowsUI;
@property (nonatomic) BOOL shouldClearPrototypeCachesForMigration;
@property (nonatomic) BOOL shouldClearSettingsArchivesForMigration;
@property (retain, nonatomic) NSString *testRecipeDescription;
@property (nonatomic) BOOL testRecipeEatsRingerSwitch;
@property (nonatomic) BOOL testRecipeEatsVolumeDown;
@property (nonatomic) BOOL testRecipeEatsVolumeUp;
@property (retain, nonatomic) NSString *testRecipeIdentifier;
@property (nonatomic) BOOL volumeDownShowsUI;
@property (nonatomic) BOOL volumeUpShowsUI;


+(id)sharedInstance;
-(BOOL)_eventShowsUI:(NSInteger)arg0 ;
-(BOOL)activeTestRecipeEatsEvent:(NSInteger)arg0 ;
-(BOOL)canEditShowsUIForEvent:(NSInteger)arg0 ;
-(BOOL)displayedShowsUIValueForEvent:(NSInteger)arg0 ;
-(BOOL)prototypingServerWantsEvent:(NSInteger)arg0 ;
-(BOOL)testRecipeIsActive;
-(id)_eventDefaults;
-(id)_testRecipeDefaults;
-(id)activeTestRecipeDescription;
-(id)activeTestRecipeEventDescription;
-(id)activeTestRecipeIdentifier;
-(id)observeEventDefaultsOnQueue:(id)arg0 withBlock:(id)arg1 ;
-(id)observeShowUISwitchDefaultsOnQueue:(id)arg0 withBlock:(id)arg1 ;
-(id)observeTestRecipeDefaultsOnQueue:(id)arg0 withBlock:(id)arg1 ;
-(void)_bindAndRegisterDefaults;
-(void)deactivateTestRecipe;
-(void)setShowsUI:(BOOL)arg0 forEvent:(NSInteger)arg1 ;


@end


#endif