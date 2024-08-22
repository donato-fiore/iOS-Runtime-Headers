// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSSIGNINSERVICEUSERSTATUS_H
#define IDSSIGNINSERVICEUSERSTATUS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface IDSSignInServiceUserStatus : NSObject

@property (readonly, nonatomic) NSUInteger appleIDUserStatus;
@property (readonly, nonatomic) NSUInteger phoneUserStatus;
@property (readonly, nonatomic) NSUInteger serviceType; // ivar: _serviceType
@property (readonly, nonatomic) NSArray *serviceUserInfos; // ivar: _serviceUserInfos


-(id)description;
-(id)initWithServiceType:(NSUInteger)arg0 userInfos:(id)arg1 ;


@end


#endif