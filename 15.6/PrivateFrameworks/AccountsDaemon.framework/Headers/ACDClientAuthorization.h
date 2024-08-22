// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACDCLIENTAUTHORIZATION_H
#define ACDCLIENTAUTHORIZATION_H

@class NSSet, NSDictionary;

#import <Foundation/Foundation.h>

#import "ACDClient.h"

@interface ACDClientAuthorization : NSObject

@property (retain, nonatomic) ACDClient *client; // ivar: _client
@property (retain, nonatomic) NSSet *grantedPermissions; // ivar: _grantedPermissions
@property (nonatomic) BOOL isGranted; // ivar: _isGranted
@property (copy, nonatomic) NSDictionary *options; // ivar: _options


-(id)initForClient:(id)arg0 ;


@end


#endif