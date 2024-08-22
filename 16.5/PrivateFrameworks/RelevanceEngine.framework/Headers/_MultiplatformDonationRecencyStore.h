// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MULTIPLATFORMDONATIONRECENCYSTORE_H
#define _MULTIPLATFORMDONATIONRECENCYSTORE_H

@class NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _MultiplatformDonationRecencyStore : NSObject {
    NSMutableArray *_appDateInfo;
    NSMutableDictionary *_infoByLocalID;
    NSMutableDictionary *_infoByRemoteID;
}




-(id)bundlesFromMostRecentlyProvidingPlatforms;
-(id)init;
-(void)updateDataWithRemoteBundleIdentifier:(id)arg0 remoteDate:(id)arg1 localBundleIdentifier:(id)arg2 localDate:(id)arg3 ;


@end


#endif