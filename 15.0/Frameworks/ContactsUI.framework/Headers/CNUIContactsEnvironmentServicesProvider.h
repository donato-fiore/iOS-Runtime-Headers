// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNUICONTACTSENVIRONMENTSERVICESPROVIDER_H
#define CNUICONTACTSENVIRONMENTSERVICESPROVIDER_H


#import <Foundation/Foundation.h>


@interface CNUIContactsEnvironmentServicesProvider : NSObject



+(id)applicationWorkspace;
+(id)capabilities;
+(id)defaultUserActionFetcher;
+(id)idsIDQueryControllerWrapper;
+(id)recentsManagerWithSchedulerProvider:(id)arg0 ;
+(id)suggestionsService;


@end


#endif