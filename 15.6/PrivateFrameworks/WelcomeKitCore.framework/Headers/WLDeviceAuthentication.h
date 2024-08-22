// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WLDEVICEAUTHENTICATION_H
#define WLDEVICEAUTHENTICATION_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WLDeviceAuthentication : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *sessionUUID; // ivar: _sessionUUID


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif