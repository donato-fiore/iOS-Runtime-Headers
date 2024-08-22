// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSSPECIFIERCONTROLLER_H
#define PSSPECIFIERCONTROLLER_H

@class NSMutableArray, UIViewController<PSSpecifierControllerDelegate>;

#import <Foundation/Foundation.h>

#import "PSSpecifier.h"

@interface PSSpecifierController : NSObject

@property (retain, nonatomic) NSMutableArray *bundleControllers; // ivar: _bundleControllers
@property (retain, nonatomic) NSMutableArray *groups; // ivar: _groups
@property (retain, nonatomic) PSSpecifier *specifier; // ivar: _specifier
@property (retain, nonatomic) NSMutableArray *specifiers; // ivar: _specifiers
@property (weak, nonatomic) UIViewController<PSSpecifierControllerDelegate> *viewController; // ivar: _viewController


-(BOOL)_getGroup:(*NSInteger)arg0 row:(*NSInteger)arg1 ofSpecifierAtIndex:(NSInteger)arg2 groups:(id)arg3 ;
-(BOOL)getGroup:(*NSInteger)arg0 row:(*NSInteger)arg1 ofSpecifier:(id)arg2 ;
-(BOOL)getGroup:(*NSInteger)arg0 row:(*NSInteger)arg1 ofSpecifierAtIndex:(NSInteger)arg2 ;
-(BOOL)getGroup:(*NSInteger)arg0 row:(*NSInteger)arg1 ofSpecifierID:(id)arg2 ;
-(NSInteger)indexForIndexPath:(id)arg0 ;
-(NSInteger)indexOfGroup:(NSInteger)arg0 ;
-(NSInteger)numberOfRowsInSection:(NSInteger)arg0 ;
-(NSInteger)numberOfSections;
-(id)_createGroupIndices:(id)arg0 ;
-(id)init;
-(id)loadSpecifiers;
-(id)loadSpecifiersFromPlistName:(id)arg0 target:(id)arg1 ;
-(id)loadSpecifiersFromPlistName:(id)arg0 target:(id)arg1 bundle:(id)arg2 ;
-(id)readPreferenceValue:(id)arg0 ;
-(id)specifierAtIndex:(NSInteger)arg0 ;
-(id)specifierAtIndexPath:(id)arg0 ;
-(id)specifierForID:(id)arg0 ;
-(void)createGroupIndices;
-(void)prepareSpecifiersMetadata;
-(void)reloadSpecifiers;
-(void)setPreferenceValue:(id)arg0 specifier:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif