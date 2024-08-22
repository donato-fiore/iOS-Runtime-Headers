// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMUIPROFILEVIEWMODEL_H
#define RMUIPROFILEVIEWMODEL_H

@class RMModelDeclarationBase, NSString;

#import <Foundation/Foundation.h>

#import "RMUIInteractiveProfileFooterViewModel.h"
#import "RMUIInteractiveProfileToggleViewModel.h"

@interface RMUIProfileViewModel : NSObject

@property (retain) RMModelDeclarationBase *declaration; // ivar: _declaration
@property (retain) RMUIInteractiveProfileFooterViewModel *footerViewModel; // ivar: _footerViewModel
@property (retain) NSString *interactiveDetailsText; // ivar: _interactiveDetailsText
@property BOOL isInteractiveProfile; // ivar: _isInteractiveProfile
@property (retain) NSString *profileIdentifier; // ivar: _profileIdentifier
@property short symbol; // ivar: _symbol
@property (retain) NSString *title; // ivar: _title
@property (retain) RMUIInteractiveProfileToggleViewModel *toggleViewModel; // ivar: _toggleViewModel
@property (retain) NSString *value; // ivar: _value


-(id)init;
-(void)clearModel;
-(void)setInteractiveProfileActive:(BOOL)arg0 profileIdentifier:(id)arg1 ;


@end


#endif