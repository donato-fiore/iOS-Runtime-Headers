// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDHRPAIREDSYNCSTATEPROVIDER_H
#define HDHRPAIREDSYNCSTATEPROVIDER_H

@protocol HDHRPairedSyncStateProviding;

#import <Foundation/Foundation.h>


@interface HDHRPairedSyncStateProvider : NSObject <HDHRPairedSyncStateProviding>





-(BOOL)isPairedSyncCompleted;


@end


#endif