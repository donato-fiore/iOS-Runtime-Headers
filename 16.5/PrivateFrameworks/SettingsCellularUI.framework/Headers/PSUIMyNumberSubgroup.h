// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSUIMYNUMBERSUBGROUP_H
#define PSUIMYNUMBERSUBGROUP_H

@class NSMutableArray, NSString, PSListController, PSSpecifier;
@protocol PSSpecifierGroup;

#import <Foundation/Foundation.h>


@interface PSUIMyNumberSubgroup : NSObject <PSSpecifierGroup>



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