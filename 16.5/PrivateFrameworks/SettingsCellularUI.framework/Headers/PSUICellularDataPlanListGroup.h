// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSUICELLULARDATAPLANLISTGROUP_H
#define PSUICELLULARDATAPLANLISTGROUP_H

@class NSString, PSSpecifier, PSListController;
@protocol PSSpecifierGroup;

#import <Foundation/Foundation.h>


@interface PSUICellularDataPlanListGroup : NSObject <PSSpecifierGroup>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) PSSpecifier *groupSpecifier; // ivar: _groupSpecifier
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) PSListController *listController; // ivar: _listController
@property (readonly) Class superclass;


-(id)getLogger;
-(id)initWithListController:(id)arg0 groupSpecifier:(id)arg1 ;
-(id)specifiers;
-(void)addNewPlanPressed:(id)arg0 ;
-(void)listController:(id)arg0 didSelectSpecifier:(id)arg1 ;
-(void)selectPlanWithSpecifier:(id)arg0 ;
-(void)setUpPendingTransferPlanSpecifiers:(id)arg0 ;


@end


#endif