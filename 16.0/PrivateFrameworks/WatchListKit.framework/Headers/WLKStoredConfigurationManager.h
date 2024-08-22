// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKSTOREDCONFIGURATIONMANAGER_H
#define WLKSTOREDCONFIGURATIONMANAGER_H


#import <Foundation/Foundation.h>

#import "WLKStoredConfiguration.h"

@interface WLKStoredConfigurationManager : NSObject

@property (retain, nonatomic) WLKStoredConfiguration *storedConfiguration; // ivar: _storedConfiguration


+(id)sharedInstance;
-(id)init;
-(void)_handleAccountChange:(id)arg0 ;
-(void)_handleLibraryChange:(id)arg0 ;
-(void)_invalidateWithReason:(id)arg0 ;
-(void)_updateConfiguration:(id)arg0 ;
-(void)dealloc;


@end


#endif