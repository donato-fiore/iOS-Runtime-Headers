// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBSHOMESCREENBASELISTCONTROLLER_H
#define DBSHOMESCREENBASELISTCONTROLLER_H

@class PSListController, SBSHomeScreenService, PSCloudSyncButton, NSString;
@protocol PSCloudSyncDelegate;



@interface DBSHomeScreenBaseListController : PSListController <PSCloudSyncDelegate>



@property (readonly, nonatomic) SBSHomeScreenService *_homeScreenService; // ivar: __homeScreenService
@property (retain, nonatomic) PSCloudSyncButton *cloudSyncButton; // ivar: _cloudSyncButton
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasMergeConflict;
-(id)init;
-(id)showsBadgesInAppLibrary:(id)arg0 ;
-(id)showsSpotlight:(id)arg0 ;
-(id)specifiers;
-(void)dealloc;
-(void)isCloudSyncEnabled:(id)arg0 ;
-(void)resolveMergeConflict:(NSUInteger)arg0 ;
-(void)setCloudSyncEnabled:(BOOL)arg0 ;
-(void)setShowsBadgesInAppLibrary:(id)arg0 specifier:(id)arg1 ;
-(void)setShowsSpotlight:(id)arg0 specifier:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif