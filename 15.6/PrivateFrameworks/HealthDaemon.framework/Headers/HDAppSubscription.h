// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDAPPSUBSCRIPTION_H
#define HDAPPSUBSCRIPTION_H

@class NSString, HKObjectType;

#import <Foundation/Foundation.h>


@interface HDAppSubscription : NSObject

@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSInteger dataCode; // ivar: _dataCode
@property (nonatomic) NSInteger lastAckTime; // ivar: _lastAckTime
@property (nonatomic) NSUInteger lastAnchor; // ivar: _lastAnchor
@property (nonatomic) NSInteger launchTimeHysteresis; // ivar: _launchTimeHysteresis
@property (readonly, copy, nonatomic) HKObjectType *objectType;
@property (nonatomic) NSUInteger updateFrequency; // ivar: _updateFrequency


-(id)init;
-(id)initWithBundleIdentifier:(id)arg0 dataCode:(NSInteger)arg1 ;


@end


#endif