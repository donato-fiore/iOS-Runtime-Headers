// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSGAIRDROPCONTROLLER_H
#define PSGAIRDROPCONTROLLER_H

@class PSListController, SFAirDropDiscoveryController, PSSpecifier, NSString;
@protocol SFAirDropDiscoveryControllerDelegate;



@interface PSGAirDropController : PSListController <SFAirDropDiscoveryControllerDelegate>

 {
    SFAirDropDiscoveryController *_airDropDiscoveryController;
    PSSpecifier *_groupSpecifier;
    PSSpecifier *_offSpecifier;
    PSSpecifier *_contactsOnlySpecifier;
    PSSpecifier *_everyoneSpecifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)specifiers;
-(void)_refreshFooterForSpecifier:(id)arg0 ;
-(void)_updateSpecifiersFromPreferences;
-(void)dealloc;
-(void)discoveryControllerSettingsDidChange:(id)arg0 ;
-(void)discoveryControllerVisibilityDidChange:(id)arg0 ;
-(void)loadView;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif