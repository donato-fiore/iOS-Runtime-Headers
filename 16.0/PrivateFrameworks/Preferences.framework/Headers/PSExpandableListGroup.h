// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSEXPANDABLELISTGROUP_H
#define PSEXPANDABLELISTGROUP_H

@class NSString, NSMutableArray;
@protocol PSSpecifierGroup;

#import <Foundation/Foundation.h>

#import "PSListController.h"
#import "PSSpecifier.h"

@interface PSExpandableListGroup : NSObject <PSSpecifierGroup>

 {
    PSListController *_listController;
    NSString *_groupSpecifierID;
    NSInteger _collaspeAfterCount;
    NSMutableArray *_specifiers;
    BOOL _showAll;
    PSSpecifier *_showAllSpecifier;
    PSSpecifier *_spinnerSpecifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)_groupIndex;
-(id)initWithListController:(id)arg0 groupSpecifier:(id)arg1 ;
-(id)initWithListController:(id)arg0 groupSpecifierID:(id)arg1 collapseAfterCount:(NSInteger)arg2 ;
-(id)showAllSpecifier;
-(id)specifiers;
-(id)spinnerSpecifier;
-(void)addSpecifiers:(id)arg0 ;
-(void)reloadSpecifier:(id)arg0 ;
-(void)reloadSpecifiers;
-(void)removeAllSpecifiers;
-(void)showAll;


@end


#endif