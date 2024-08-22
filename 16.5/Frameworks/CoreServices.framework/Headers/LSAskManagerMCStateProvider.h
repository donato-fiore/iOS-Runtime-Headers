// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LSASKMANAGERMCSTATEPROVIDER_H
#define LSASKMANAGERMCSTATEPROVIDER_H

@class NSString;
@protocol LSMCStateProvider;

#import <Foundation/Foundation.h>

#import "LSApplicationRestrictionsManager.h"

@interface LSAskManagerMCStateProvider : NSObject <LSMCStateProvider>

 {
    LSApplicationRestrictionsManager *_manager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isAllowlistEnabled;
-(id)allowlistedBundleIDs;
-(id)restrictedBundleIDs;


@end


#endif