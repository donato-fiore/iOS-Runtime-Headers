// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCONTEXTUALMEMORIESSETTINGSCONTROLLER_H
#define PXCONTEXTUALMEMORIESSETTINGSCONTROLLER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "PXContextualMemoriesSettings.h"

@interface PXContextualMemoriesSettingsController : NSObject

@property (retain, nonatomic) NSMutableArray *completionHandlers; // ivar: _completionHandlers
@property (retain, nonatomic) NSMutableArray *registrationIdentifiers; // ivar: _registrationIdentifiers
@property (nonatomic, getter=isRequestingUpdates) BOOL requestingUpdates; // ivar: _requestingUpdates
@property (readonly, nonatomic) PXContextualMemoriesSettings *settings; // ivar: _settings


+(id)sharedController;
-(id)init;
-(void)registerForLocationPrefetchingWithIdentifier:(id)arg0 ;
-(void)requestUpdatedContextualMemoriesSettingsWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)unregisterForLocationPrefetchingWithIdentifier:(id)arg0 ;


@end


#endif