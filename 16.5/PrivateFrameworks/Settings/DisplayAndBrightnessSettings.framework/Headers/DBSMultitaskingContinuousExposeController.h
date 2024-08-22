// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBSMULTITASKINGCONTINUOUSEXPOSECONTROLLER_H
#define DBSMULTITASKINGCONTINUOUSEXPOSECONTROLLER_H

@class PSListController, NSString, SBSExternalDisplayService, SBSConnectedDisplayInfo;
@protocol SBSExternalDisplayServiceObserver;



@interface DBSMultitaskingContinuousExposeController : PSListController <SBSExternalDisplayServiceObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SBSExternalDisplayService *displayService; // ivar: _displayService
@property (retain, nonatomic) SBSConnectedDisplayInfo *externalDisplayInfo; // ivar: _externalDisplayInfo
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)externalDisplayDidConnect:(id)arg0 ;
-(void)externalDisplayDidUpdateProperties:(id)arg0 ;
-(void)externalDisplayWillDisconnect:(id)arg0 ;
-(void)reloadSpecifierLayoutChooser;
-(void)setContinuousExposeEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)updateExternalDisplayInfoWithCompletionHandler:(id)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif