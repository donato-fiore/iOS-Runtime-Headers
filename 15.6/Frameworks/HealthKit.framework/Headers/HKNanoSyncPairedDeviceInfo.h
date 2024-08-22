// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKNANOSYNCPAIREDDEVICEINFO_H
#define HKNANOSYNCPAIREDDEVICEINFO_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKNanoSyncPairedDeviceInfo : NSObject <NSCopying, NSSecureCoding>

 {
    NSString *_sourceBundleIdentifier;
    NSString *_systemBuildVersion;
    NSString *_productType;
    NSUInteger _state;
    int _protocolVersion;
}


@property (readonly, getter=isActive) BOOL active;
@property (readonly, copy) NSString *productType;
@property (readonly) int protocolVersion;
@property (readonly, getter=isRestoreComplete) BOOL restoreComplete;
@property (readonly, copy) NSString *sourceBundleIdentifier;
@property (readonly, copy) NSString *systemBuildVersion;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSourceBundleIdentifier:(id)arg0 systemBuildVersion:(id)arg1 productType:(id)arg2 active:(BOOL)arg3 restoreComplete:(BOOL)arg4 protocolVersion:(int)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif