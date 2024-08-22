// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSACTIVITYUPDATE_H
#define IDSACTIVITYUPDATE_H

@class NSArray, NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "IDSDevice.h"

@interface IDSActivityUpdate : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *URIs; // ivar: _URIs
@property (readonly, nonatomic) NSData *clientContext; // ivar: _clientContext
@property (nonatomic) BOOL isDeviceOnline; // ivar: _isDeviceOnline
@property (retain, nonatomic) IDSDevice *matchingDevice; // ivar: _matchingDevice
@property (readonly, nonatomic) NSData *pushToken; // ivar: _pushToken
@property (readonly, nonatomic) NSUInteger serverTimestamp; // ivar: _serverTimestamp
@property (readonly, nonatomic) NSString *subActivity; // ivar: _subActivity


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSubActivity:(id)arg0 pushToken:(id)arg1 serverTimestamp:(NSUInteger)arg2 clientContext:(id)arg3 isDeviceOnline:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif