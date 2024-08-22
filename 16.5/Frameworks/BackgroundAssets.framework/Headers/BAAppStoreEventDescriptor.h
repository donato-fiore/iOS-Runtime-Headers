// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BAAPPSTOREEVENTDESCRIPTOR_H
#define BAAPPSTOREEVENTDESCRIPTOR_H

@class NSString, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BAAppStoreEventDescriptor : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (readonly, nonatomic) NSURL *appBundleURL; // ivar: _appBundleURL
@property (nonatomic) BOOL automaticInstall; // ivar: _automaticInstall
@property (readonly, nonatomic) NSUInteger clientType; // ivar: _clientType
@property (readonly, nonatomic) NSUInteger eventType; // ivar: _eventType
@property (nonatomic) BOOL userInitiated; // ivar: _userInitiated


+(BOOL)supportsSecureCoding;
+(id)descriptorWithAppBundleIdentifier:(id)arg0 appBundleURL:(id)arg1 event:(NSUInteger)arg2 client:(NSUInteger)arg3 ;
+(id)new;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif