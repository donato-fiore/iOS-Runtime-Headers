// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXAVROUTEINFO_H
#define ATXAVROUTEINFO_H

@class NSString;
@protocol NSSecureCoding, ATXProtoBufWrapper;

#import <Foundation/Foundation.h>


@interface ATXAVRouteInfo : NSObject <NSSecureCoding, ATXProtoBufWrapper>



@property (readonly, nonatomic) NSString *deviceID; // ivar: _deviceID
@property (readonly, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (readonly, nonatomic) BOOL isExternalRoute; // ivar: _isExternalRoute


+(BOOL)supportsSecureCoding;
-(id)encodeAsProto;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceName:(id)arg0 deviceID:(id)arg1 isExternalRoute:(BOOL)arg2 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)proto;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif