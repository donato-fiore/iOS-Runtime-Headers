// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBSEXTERNALDISPLAYPREFERENCESCONTROLLER_H
#define DBSEXTERNALDISPLAYPREFERENCESCONTROLLER_H

@class PSListController, NSString, SBSConnectedDisplayInfo;
@protocol DBSZoomAndProSpecifiersDelegate, DBSDisplayZoomSelectionControllerDelegate;


#import "DBSZoomAndProSpecifiers.h"

@interface DBSExternalDisplayPreferencesController : PSListController <DBSZoomAndProSpecifiersDelegate, DBSDisplayZoomSelectionControllerDelegate>



@property (retain, nonatomic) DBSZoomAndProSpecifiers *_zoomAndProSpecifierVendor; // ivar: __zoomAndProSpecifierVendor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SBSConnectedDisplayInfo *externalDisplayInfo;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)proModeSupported;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSUInteger)supportedZoomModesCount;
-(id)displayModeSpecifiers;
-(id)externalAutoBrightnessValueForSpecifier:(id)arg0 ;
-(id)externalBrightnessSpecifiers;
-(id)externalBrightnessValueForSpecifier:(id)arg0 ;
-(id)getProModeEnabled;
-(id)init;
-(id)localizedMagnifyModeName;
-(id)matchContentEnabled:(id)arg0 ;
-(id)specifiers;
-(id)valueForSpecifier:(id)arg0 ;
-(void)connectedDisplayDidUpdate:(id)arg0 ;
-(void)dealloc;
-(void)displayZoomDidUpdate;
-(void)externalBrightnessDidUpdate:(id)arg0 ;
-(void)handleDBSExternalDBSDisplayPreferencesControllerExternalDisplayManagerExternalAutoBrightnessAvailablityDidChangeNotification:(id)arg0 ;
-(void)handleDBSExternalDBSDisplayPreferencesControllerExternalDisplayManagerExternalAutoBrightnessValueDidChangeNotification:(id)arg0 ;
-(void)handleDBSExternalDisplayManagerExternalBrightnessAvailablityDidChangeNotification:(id)arg0 ;
-(void)insertExternalBrightnessSpecifiers;
-(void)presentModalFineTuneController;
-(void)presentModalMagnifyController;
-(void)removeExternalBrightnessSpecifiers;
-(void)setExternalAutoBrightnessValue:(id)arg0 specifier:(id)arg1 ;
-(void)setExternalBrightnessValue:(id)arg0 specifier:(id)arg1 ;
-(void)setMatchContentEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setProModeEnabled:(BOOL)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif