// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMODECONFIGURATIONLOGGERSUGGESTEDITEMS_H
#define ATXMODECONFIGURATIONLOGGERSUGGESTEDITEMS_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface ATXModeConfigurationLoggerSuggestedItems : NSObject

@property (retain, nonatomic) NSMutableSet *suggestedAllowedApps; // ivar: _suggestedAllowedApps
@property (retain, nonatomic) NSMutableSet *suggestedAllowedContacts; // ivar: _suggestedAllowedContacts
@property (retain, nonatomic) NSMutableSet *suggestedDeniedApps; // ivar: _suggestedDeniedApps
@property (retain, nonatomic) NSMutableSet *suggestedDeniedContacts; // ivar: _suggestedDeniedContacts


-(id)init;


@end


#endif