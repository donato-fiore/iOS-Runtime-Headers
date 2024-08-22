// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKMOCKSETTINGSUIVISIBILITYPROVIDER_H
#define CRKMOCKSETTINGSUIVISIBILITYPROVIDER_H

@class NSString;
@protocol CRKSettingsUIVisibilityProvider;

#import <Foundation/Foundation.h>


@interface CRKMockSettingsUIVisibilityProvider : NSObject <CRKSettingsUIVisibilityProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *paneStatus;
@property BOOL settingsUIVisible; // ivar: _settingsUIVisible
@property (readonly) Class superclass;


-(void)connectToDaemon;


@end


#endif