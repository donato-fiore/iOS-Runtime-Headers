// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSPHOTOSERVICESAUTHORIZATIONLEVELCONTROLLER_H
#define PSPHOTOSERVICESAUTHORIZATIONLEVELCONTROLLER_H

@class NSArray, NSString, NSDictionary, NSBundle;


#import "PSListItemsController.h"
#import "PSSpecifier.h"

@interface PSPhotoServicesAuthorizationLevelController : PSListItemsController {
    NSArray *_modifySelectionSpecifiers;
    PSSpecifier *_modifySelectionButton;
    NSString *_clientIdentifier;
}


@property (retain, nonatomic) NSDictionary *details; // ivar: _details
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) NSBundle *entityBundle; // ivar: _entityBundle


-(id)_modifySelectionSpecifiers;
-(id)footerStringForSpecifiers:(id)arg0 ;
-(id)specifiers;
-(void)_presentImagePickerForModifyingSelection;
-(void)setSpecifier:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif