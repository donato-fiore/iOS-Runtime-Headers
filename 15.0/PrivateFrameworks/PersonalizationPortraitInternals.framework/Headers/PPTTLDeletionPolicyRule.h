// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPTTLDELETIONPOLICYRULE_H
#define PPTTLDELETIONPOLICYRULE_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface PPTTLDeletionPolicyRule : NSObject

@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSString *groupIdentifier; // ivar: _groupIdentifier
@property (readonly, nonatomic) NSNumber *maxAgeSeconds; // ivar: _maxAgeSeconds


-(id)description;
-(id)initWithBundleIdentifier:(id)arg0 groupIdentifier:(id)arg1 maxAgeSeconds:(id)arg2 ;


@end


#endif