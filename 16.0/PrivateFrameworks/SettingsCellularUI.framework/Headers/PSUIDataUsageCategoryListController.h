// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSUIDATAUSAGECATEGORYLISTCONTROLLER_H
#define PSUIDATAUSAGECATEGORYLISTCONTROLLER_H

@class PSListController, PSSpecifier;


#import "PSUIDataUsageCategorySpecifier.h"

@interface PSUIDataUsageCategoryListController : PSListController

@property (retain, nonatomic) PSUIDataUsageCategorySpecifier *parentSpecifier; // ivar: _parentSpecifier
@property (retain, nonatomic) PSSpecifier *spinnerSpecifier; // ivar: _spinnerSpecifier


-(BOOL)shouldReloadSpecifiersOnResume;
-(id)init;
-(id)specifiers;


@end


#endif