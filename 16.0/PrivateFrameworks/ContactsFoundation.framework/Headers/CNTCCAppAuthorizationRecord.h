// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNTCCAPPAUTHORIZATIONRECORD_H
#define CNTCCAPPAUTHORIZATIONRECORD_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CNTCCAppAuthorizationRecord : NSObject

@property (nonatomic) NSInteger authorizationStatus; // ivar: _authorizationStatus
@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, nonatomic) NSInteger recordType; // ivar: _recordType


+(NSInteger)authorizationStatusFromAuthorizationRight:(NSUInteger)arg0 ;
+(NSUInteger)authorizationRightFromAuthorizationStatus:(NSInteger)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 localizedName:(id)arg1 recordType:(NSInteger)arg2 authorizationStatus:(NSInteger)arg3 ;
-(id)initWithTCCAuthorizationRecord:(id)arg0 ;


@end


#endif