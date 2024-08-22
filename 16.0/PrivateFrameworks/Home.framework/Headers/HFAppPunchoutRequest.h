// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFAPPPUNCHOUTREQUEST_H
#define HFAPPPUNCHOUTREQUEST_H

@class NSString, NSURL;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HFAppPunchoutRequest : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSURL *payloadURL; // ivar: _payloadURL
@property (readonly, nonatomic) NSURL *storeURL; // ivar: _storeURL


+(BOOL)canHandleBundleID:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)_openApplicationService;
+(id)handleRequest:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 bundleID:(id)arg1 payloadURL:(id)arg2 storeURL:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif