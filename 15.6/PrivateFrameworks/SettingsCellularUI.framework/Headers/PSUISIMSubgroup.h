// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSUISIMSUBGROUP_H
#define PSUISIMSUBGROUP_H

@class NSMutableArray, NSString, PSListController, PSSpecifier;
@protocol PSSpecifierGroup;

#import <Foundation/Foundation.h>


@interface PSUISIMSubgroup : NSObject <PSSpecifierGroup>



@property (retain, nonatomic) NSMutableArray *bundleControllers; // ivar: _bundleControllers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) PSListController *listController; // ivar: _listController
@property (weak, nonatomic) PSSpecifier *parentSpecifier; // ivar: _parentSpecifier
@property (readonly) Class superclass;


-(id)initWithListController:(id)arg0 groupSpecifier:(id)arg1 ;
-(id)initWithListController:(id)arg0 groupSpecifier:(id)arg1 parentSpecifier:(id)arg2 ;
-(id)specifiers;


@end


#endif