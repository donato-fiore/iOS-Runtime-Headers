// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DBSEXTERNALDISPLAYPREFERENCESCONTROLLER_H
#define DBSEXTERNALDISPLAYPREFERENCESCONTROLLER_H

@class PSListController;



@interface DBSExternalDisplayPreferencesController : PSListController



-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(id)displayModeSpecifiers;
-(id)externalAutoBrightnessValueForSpecifier:(id)arg0 ;
-(id)externalBrightnessSpecifiers;
-(id)externalBrightnessValueForSpecifier:(id)arg0 ;
-(id)init;
-(id)matchContentEnabled:(id)arg0 ;
-(id)specifiers;
-(id)valueForSpecifier:(id)arg0 ;
-(void)connectedDisplayDidUpdate:(id)arg0 ;
-(void)dealloc;
-(void)externalBrightnessDidUpdate:(id)arg0 ;
-(void)handleDBSExternalDBSDisplayPreferencesControllerExternalDisplayManagerExternalAutoBrightnessAvailablityDidChangeNotification:(id)arg0 ;
-(void)handleDBSExternalDBSDisplayPreferencesControllerExternalDisplayManagerExternalAutoBrightnessValueDidChangeNotification:(id)arg0 ;
-(void)handleDBSExternalDisplayManagerExternalBrightnessAvailablityDidChangeNotification:(id)arg0 ;
-(void)insertExternalBrightnessSpecifiers;
-(void)removeExternalBrightnessSpecifiers;
-(void)setExternalAutoBrightnessValue:(id)arg0 specifier:(id)arg1 ;
-(void)setExternalBrightnessValue:(id)arg0 specifier:(id)arg1 ;
-(void)setMatchContentEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif