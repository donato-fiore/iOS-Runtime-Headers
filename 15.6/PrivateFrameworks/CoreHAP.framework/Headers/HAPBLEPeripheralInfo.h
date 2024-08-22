// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAPBLEPERIPHERALINFO_H
#define HAPBLEPERIPHERALINFO_H

@class HMFObject, NSString, NSData, NSNumber, NSUUID;
@protocol NSSecureCoding;



@interface HAPBLEPeripheralInfo : HMFObject <NSSecureCoding>



@property (retain, nonatomic) NSString *accessoryName; // ivar: _accessoryName
@property (nonatomic) NSUInteger advertisedProtocolVersion; // ivar: _advertisedProtocolVersion
@property (retain, nonatomic) NSData *broadcastKey; // ivar: _broadcastKey
@property (readonly, nonatomic) NSNumber *categoryIdentifier; // ivar: _categoryIdentifier
@property (readonly, nonatomic) NSNumber *configNumber; // ivar: _configNumber
@property (retain, nonatomic) NSNumber *keyUpdatedStateNumber; // ivar: _keyUpdatedStateNumber
@property (nonatomic) CGFloat keyUpdatedTime; // ivar: _keyUpdatedTime
@property (readonly, nonatomic) CGFloat lastSeen; // ivar: _lastSeen
@property (readonly, nonatomic) NSUUID *peripheralUUID; // ivar: _peripheralUUID
@property (nonatomic) NSUInteger previousProtocolVersion; // ivar: _previousProtocolVersion
@property (nonatomic) NSUInteger resumeSessionId; // ivar: _resumeSessionId
@property (retain, nonatomic) NSNumber *stateNumber; // ivar: _stateNumber
@property (readonly, nonatomic) NSNumber *statusFlags; // ivar: _statusFlags


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPeripheralInfo:(id)arg0 advertisedProtocolVersion:(NSUInteger)arg1 previousProtocolVersion:(NSInteger)arg2 resumeSessionId:(NSUInteger)arg3 lastSeen:(CGFloat)arg4 statusFlags:(id)arg5 stateNumber:(id)arg6 configNumber:(id)arg7 categoryIdentifier:(id)arg8 accessoryName:(id)arg9 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)saveBroadcastKey:(id)arg0 keyUpdatedStateNumber:(id)arg1 updatedTime:(CGFloat)arg2 ;
-(void)updateAccessoryName:(id)arg0 ;
-(void)updateBroadcastKey:(id)arg0 ;
-(void)updateProtocolVersion:(NSUInteger)arg0 ;
-(void)updateResumeSessionId:(NSUInteger)arg0 ;
-(void)updateStateNumber:(id)arg0 ;


@end


#endif