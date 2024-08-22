// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCREDENTIALIDENTITYSTORESTATE_H
#define ASCREDENTIALIDENTITYSTORESTATE_H


#import <Foundation/Foundation.h>


@interface ASCredentialIdentityStoreState : NSObject

@property (readonly, nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) BOOL supportsIncrementalUpdates; // ivar: _supportsIncrementalUpdates


-(id)description;
-(id)initWithEnabledState:(BOOL)arg0 supportsIncrementalUpdates:(BOOL)arg1 ;


@end


#endif