// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRIVACYPROXYNETWORKSTATUS_H
#define PRIVACYPROXYNETWORKSTATUS_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PrivacyProxyNetworkStatus : NSObject <NSSecureCoding, NSCopying>



@property (retain) NSString *networkName; // ivar: _networkName
@property NSUInteger networkStatus; // ivar: _networkStatus
@property int networkType; // ivar: _networkType


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithStatus:(NSUInteger)arg0 type:(int)arg1 name:(id)arg2 ;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif