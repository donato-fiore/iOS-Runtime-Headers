// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKPLATFORMFEATUREDATASTORE_H
#define CRKPLATFORMFEATUREDATASTORE_H

@protocol CRKSharedFeatureDataStoreProviding;

#import <Foundation/Foundation.h>


@interface CRKPlatformFeatureDataStore : NSObject <CRKSharedFeatureDataStoreProviding>





+(id)sharedDataStore;


@end


#endif