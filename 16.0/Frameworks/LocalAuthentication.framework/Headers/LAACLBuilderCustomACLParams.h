// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LAACLBUILDERCUSTOMACLPARAMS_H
#define LAACLBUILDERCUSTOMACLPARAMS_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface LAACLBuilderCustomACLParams : NSObject

@property (retain, nonatomic) NSDictionary *apConstraints; // ivar: _apConstraints
@property (nonatomic) NSInteger authType; // ivar: _authType
@property (retain, nonatomic) NSDictionary *credentials; // ivar: _credentials
@property (nonatomic) NSInteger fallbackAuthType; // ivar: _fallbackAuthType


-(id)init;


@end


#endif