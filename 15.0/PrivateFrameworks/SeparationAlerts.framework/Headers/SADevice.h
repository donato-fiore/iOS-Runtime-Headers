// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SADEVICE_H
#define SADEVICE_H

@class NSDate, NSString, NSUUID;
@protocol OSLogCoding, TAEventProtocol;

#import <Foundation/Foundation.h>


@interface SADevice : NSObject <OSLogCoding, TAEventProtocol>



@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger deviceType; // ivar: _deviceType
@property (readonly, copy, nonatomic) NSUUID *groupIdentifier; // ivar: _groupIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *model; // ivar: _model
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) BOOL notifyEnabled; // ivar: _notifyEnabled
@property (readonly, nonatomic) NSInteger partIdentifier; // ivar: _partIdentifier
@property (readonly, nonatomic) NSInteger productId; // ivar: _productId
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *systemVersion; // ivar: _systemVersion
@property (readonly, nonatomic) NSInteger vendorId; // ivar: _vendorId


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isReallyEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)getDate;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceUUID:(id)arg0 groupIdentifier:(id)arg1 name:(id)arg2 model:(id)arg3 systemVersion:(id)arg4 vendorId:(NSInteger)arg5 productId:(NSInteger)arg6 deviceType:(NSUInteger)arg7 notifyEnabled:(BOOL)arg8 date:(id)arg9 ;
-(id)initWithDeviceUUID:(id)arg0 groupIdentifier:(id)arg1 partIdentifier:(NSInteger)arg2 name:(id)arg3 model:(id)arg4 systemVersion:(id)arg5 vendorId:(NSInteger)arg6 productId:(NSInteger)arg7 deviceType:(NSUInteger)arg8 notifyEnabled:(BOOL)arg9 date:(id)arg10 ;
-(id)initWithDeviceUUID:(id)arg0 name:(id)arg1 model:(id)arg2 systemVersion:(id)arg3 vendorId:(NSInteger)arg4 productId:(NSInteger)arg5 deviceType:(NSUInteger)arg6 notifyEnabled:(BOOL)arg7 date:(id)arg8 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithOSLogCoder:(id)arg0 options:(NSUInteger)arg1 maxLength:(NSUInteger)arg2 ;


@end


#endif