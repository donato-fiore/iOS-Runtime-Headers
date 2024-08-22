// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKWALRUSCONFIGPROVIDER_H
#define AKWALRUSCONFIGPROVIDER_H


#import <Foundation/Foundation.h>

#import "AKWalrusConfig.h"

@interface AKWalrusConfigProvider : NSObject

@property (readonly, nonatomic) AKWalrusConfig *cachedConfig; // ivar: _cachedConfig


+(id)sharedInstance;
-(id)_extractWalrusConfigWithAccountCountry:(id)arg0 fromGlobalConfig:(id)arg1 ;
-(void)getWalrusConfigWithCompletion:(id)arg0 ;


@end


#endif