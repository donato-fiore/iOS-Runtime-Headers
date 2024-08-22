// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUILOCATIONSERVICESAUTHORIZATIONLEVELCONTROLLER_H
#define PUILOCATIONSERVICESAUTHORIZATIONLEVELCONTROLLER_H

@class NSBundle, NSArray, NSDictionary, NSString;


#import "PUILocationServicesListController.h"

@interface PUILocationServicesAuthorizationLevelController : PUILocationServicesListController {
    NSUInteger _authMask;
    BOOL _correctiveCompensationState;
}


@property (retain, nonatomic) NSBundle *authEntityBundle; // ivar: _authEntityBundle
@property (retain, nonatomic) NSArray *correctiveCompensationSpecifiersGroup; // ivar: _correctiveCompensationSpecifiersGroup
@property (retain, nonatomic) NSDictionary *details; // ivar: _details
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSString *serviceKey; // ivar: _serviceKey


-(id)_constructFooterForAuthorizationLevel:(NSUInteger)arg0 ;
-(id)_preciseLocationStatus:(id)arg0 ;
-(id)_purposeStringForAuthorizationLevel:(NSUInteger)arg0 ;
-(id)_usageTextForAuthorizationLevel:(NSUInteger)arg0 ;
-(id)init;
-(id)specifiers;
-(void)_setLocationAuthorizationLevelForSpecifier:(id)arg0 ;
-(void)_setLocationAuthorizationLevelMaskForAssociatedFramework:(NSUInteger)arg0 withCorrectiveCompensation:(int)arg1 ;
-(void)_setPreciseLocationEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)_synchronizeLocationDetails;
-(void)_updatePreciseLocationCell;
-(void)dealloc;
-(void)profileSettingsChanged:(id)arg0 ;
-(void)setSpecifier:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif