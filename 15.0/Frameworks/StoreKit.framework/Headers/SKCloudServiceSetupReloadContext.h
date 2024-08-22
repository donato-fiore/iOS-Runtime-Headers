// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKCLOUDSERVICESETUPRELOADCONTEXT_H
#define SKCLOUDSERVICESETUPRELOADCONTEXT_H

@class NSDictionary, NSString, NSURL, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SKCloudServiceSetupReloadContext : NSObject <NSCopying, NSSecureCoding>

 {
    NSDictionary *_userInfo;
}


@property (copy, nonatomic) NSString *action; // ivar: _action
@property (retain, nonatomic) NSURL *cloudServiceSetupURL; // ivar: _cloudServiceSetupURL
@property (copy, nonatomic) NSArray *queryItems; // ivar: _queryItems
@property (retain, nonatomic) NSURL *referrerURL; // ivar: _referrerURL
@property (readonly, copy, nonatomic) NSString *serializedUserInfo; // ivar: _serializedUserInfo
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier; // ivar: _sourceApplicationBundleIdentifier
@property (copy, nonatomic) NSDictionary *userInfo;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif