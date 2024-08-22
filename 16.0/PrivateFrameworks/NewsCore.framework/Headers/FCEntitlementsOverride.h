// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCENTITLEMENTSOVERRIDE_H
#define FCENTITLEMENTSOVERRIDE_H

@class NSArray, NSError;

#import <Foundation/Foundation.h>


@interface FCEntitlementsOverride : NSObject

@property (copy, nonatomic) NSArray *entitlements; // ivar: _entitlements
@property (copy, nonatomic) NSError *error; // ivar: _error


-(id)initWithEntitlements:(id)arg0 error:(id)arg1 ;


@end


#endif