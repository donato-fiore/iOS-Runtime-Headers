// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTBACKENDVERSION_H
#define AVTBACKENDVERSION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AVTBackendVersion : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGFloat avatarKitVersion; // ivar: _avatarKitVersion
@property (readonly, nonatomic) CGFloat backendVersion; // ivar: _backendVersion


+(BOOL)supportsSecureCoding;
+(id)currentVersion;
+(id)versionFileLocationForStoreLocation:(id)arg0 ;
+(id)versionFromDiskAtLocation:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)saveToDiskAtLocation:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)initWithBackendVersion:(CGFloat)arg0 avatarKitVersion:(CGFloat)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif