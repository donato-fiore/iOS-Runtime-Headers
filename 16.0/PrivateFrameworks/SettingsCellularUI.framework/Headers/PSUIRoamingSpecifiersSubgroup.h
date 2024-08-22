// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSUIROAMINGSPECIFIERSSUBGROUP_H
#define PSUIROAMINGSPECIFIERSSUBGROUP_H

@class CTServiceDescriptor, NSString, PSListController;
@protocol PSSpecifierGroup;

#import <Foundation/Foundation.h>

#import "PSUICoreTelephonyDataCache.h"

@interface PSUIRoamingSpecifiersSubgroup : NSObject <PSSpecifierGroup>

 {
    CTServiceDescriptor *_serviceDescriptor;
}


@property (weak, nonatomic) PSUICoreTelephonyDataCache *dataCache; // ivar: _dataCache
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) PSListController *listController; // ivar: _listController
@property (readonly) Class superclass;


-(id)getDataRoamingStatus:(id)arg0 ;
-(id)getLogger;
-(id)initWithListController:(id)arg0 dataCache:(id)arg1 serviceDescriptor:(id)arg2 ;
-(id)initWithListController:(id)arg0 groupSpecifier:(id)arg1 ;
-(id)specifiers;
-(void)roamingOptionsDidChange;
-(void)setDataRoamingEnabled:(id)arg0 specifier:(id)arg1 ;


@end


#endif