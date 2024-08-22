// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BAAPPSTOREPREPAREDESCRIPTOR_H
#define BAAPPSTOREPREPAREDESCRIPTOR_H

@class NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BAAppStorePrepareDescriptor : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (readonly, nonatomic) NSDictionary *appStoreMetadata; // ivar: _appStoreMetadata
@property (nonatomic) NSUInteger cellularPolicy; // ivar: _cellularPolicy
@property (readonly, nonatomic) NSUInteger clientType; // ivar: _clientType
@property (nonatomic) BOOL userInitiated; // ivar: _userInitiated


+(BOOL)supportsSecureCoding;
+(id)descriptorWithAppBundleIdentifier:(id)arg0 appStoreMetadata:(id)arg1 client:(NSUInteger)arg2 ;
+(id)new;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif