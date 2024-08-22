// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LSASKMANAGERMCSTATEPROVIDER_H
#define LSASKMANAGERMCSTATEPROVIDER_H

@class NSString;
@protocol LSMCStateProvider;

#import <Foundation/Foundation.h>


@interface LSAskManagerMCStateProvider : NSObject <LSMCStateProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isWhitelistEnabled;
-(id)restrictedBundleIDs;
-(id)whitelistedBundleIDs;


@end


#endif