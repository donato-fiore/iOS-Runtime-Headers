// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUIPHOTOSERVICESAUTHORIZATIONLEVELCONTROLLER_H
#define PUIPHOTOSERVICESAUTHORIZATIONLEVELCONTROLLER_H

@class PSListItemsController, NSArray, PSSpecifier, NSDictionary, NSString, NSBundle;



@interface PUIPhotoServicesAuthorizationLevelController : PSListItemsController {
    NSArray *_modifySelectionSpecifiers;
    PSSpecifier *_modifySelectionButton;
}


@property (retain, nonatomic) NSDictionary *details; // ivar: _details
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) NSBundle *entityBundle; // ivar: _entityBundle
@property (copy, nonatomic) NSString *serviceKey; // ivar: _serviceKey


-(id)_modifySelectionSpecifiers;
-(id)footerStringForSpecifiers:(id)arg0 ;
-(id)specifiers;
-(void)_presentImagePickerForModifyingSelection;
-(void)setSpecifier:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif