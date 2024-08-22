// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSUIDATAMODESUBGROUP_H
#define PSUIDATAMODESUBGROUP_H

@class PSListController, PSSpecifier, CTXPCServiceSubscriptionContext, NSString;
@protocol PSSpecifierGroup;

#import <Foundation/Foundation.h>

#import "PSUICoreTelephonyDataCache.h"
#import "PSUIDataModeSpecifier.h"

@interface PSUIDataModeSubgroup : NSObject <PSSpecifierGroup>

 {
    PSListController *_hostController;
    PSSpecifier *_parentSpecifier;
    PSUICoreTelephonyDataCache *_dataCache;
    CTXPCServiceSubscriptionContext *_context;
    PSUIDataModeSpecifier *_dataModeSpecifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL shouldShowLinkCell;
@property (readonly) Class superclass;


-(id)initWithHostController:(id)arg0 parentSpecifier:(id)arg1 dataCache:(id)arg2 context:(id)arg3 ctClient:(id)arg4 ;
-(id)initWithListController:(id)arg0 groupSpecifier:(id)arg1 ;
-(id)specifiers;


@end


#endif