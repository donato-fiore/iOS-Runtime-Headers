// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSUIAPPDATAUSAGEGROUP_H
#define PSUIAPPDATAUSAGEGROUP_H

@class NSArray, NSString, PSSpecifier, PSListController;
@protocol PSAppCellularUsageSpecifierDelegate, PSSpecifierGroup;

#import <Foundation/Foundation.h>

#import "CTUIListLoadingGroup.h"

@interface PSUIAppDataUsageGroup : NSObject <PSAppCellularUsageSpecifierDelegate, PSSpecifierGroup>

 {
    NSArray *_specifiers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) PSSpecifier *groupSpecifier; // ivar: _groupSpecifier
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) PSListController *hostController; // ivar: _hostController
@property (retain, nonatomic) CTUIListLoadingGroup *loadingGroup; // ivar: _loadingGroup
@property (readonly) Class superclass;


-(id)getLogger;
-(id)initWithListController:(id)arg0 groupSpecifier:(id)arg1 ;
-(id)specifiers;
-(void)calculateUsage;
-(void)didFailToSetPolicyForSpecifier:(id)arg0 ;
-(void)prefetchResourcesFor:(id)arg0 ;


@end


#endif