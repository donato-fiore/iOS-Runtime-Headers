// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFSHAREDUSERINFO_H
#define AFSHAREDUSERINFO_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AFCompanionDeviceInfo.h"

@interface AFSharedUserInfo : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) AFCompanionDeviceInfo *companionDeviceInfo; // ivar: _companionDeviceInfo
@property (readonly, nonatomic) BOOL companionLinkReady; // ivar: _companionLinkReady
@property (readonly, copy, nonatomic) NSString *homeUserId; // ivar: _homeUserId
@property (readonly, copy, nonatomic) NSString *iCloudAltDSID; // ivar: _iCloudAltDSID
@property (readonly, copy, nonatomic) NSString *loggableSharedUserId; // ivar: _loggableSharedUserId
@property (readonly, nonatomic) BOOL personalRequestsEnabled; // ivar: _personalRequestsEnabled
@property (readonly, copy, nonatomic) NSString *sharedUserId; // ivar: _sharedUserId


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBuilder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSharedUserId:(id)arg0 loggableSharedUserId:(id)arg1 companionDeviceInfo:(id)arg2 personalRequestsEnabled:(BOOL)arg3 companionLinkReady:(BOOL)arg4 homeUserId:(id)arg5 iCloudAltDSID:(id)arg6 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif