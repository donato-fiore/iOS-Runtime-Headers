// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTROTASOFTWAREUPDATEPROVIDERCLUSTERAPPLYUPDATERESPONSEPARAMS_H
#define MTROTASOFTWAREUPDATEPROVIDERCLUSTERAPPLYUPDATERESPONSEPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTROtaSoftwareUpdateProviderClusterApplyUpdateResponseParams : NSObject

@property (retain, nonatomic) NSNumber *action; // ivar: _action
@property (retain, nonatomic) NSNumber *delayedActionTime; // ivar: _delayedActionTime
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif