// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMPLICITLYASSUMEDIDENTITYENTITLEMENT_H
#define IMPLICITLYASSUMEDIDENTITYENTITLEMENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ImplicitlyAssumedIdentityEntitlement : NSObject

@property (readonly, nonatomic) NSString *impliedBundleID; // ivar: _impliedBundleID
@property (readonly, nonatomic) BOOL isWebBrowser; // ivar: _isWebBrowser
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)initWithType:(NSUInteger)arg0 impliedBundleID:(id)arg1 isWebBrowser:(BOOL)arg2 ;


@end


#endif