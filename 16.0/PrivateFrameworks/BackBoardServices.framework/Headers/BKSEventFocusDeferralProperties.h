// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKSEVENTFOCUSDEFERRALPROPERTIES_H
#define BKSEVENTFOCUSDEFERRALPROPERTIES_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BKSEventFocusDeferralProperties : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *clientID; // ivar: _clientID
@property (readonly, nonatomic) unsigned int contextID; // ivar: _contextID
@property (readonly, copy, nonatomic) NSString *displayUUID; // ivar: _displayUUID
@property (readonly, nonatomic) int pid; // ivar: _pid


+(BOOL)supportsSecureCoding;
+(id)propertiesWithClientID:(id)arg0 pid:(int)arg1 displayUUID:(id)arg2 contextID:(unsigned int)arg3 ;
+(id)propertiesWithMainDisplayAndClientID:(id)arg0 pid:(int)arg1 contextID:(unsigned int)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualNotIncludingClientIDAndPid:(id)arg0 ;
-(NSUInteger)hash;
-(id)conciseDescription;
-(id)description;
-(id)initWithClientID:(id)arg0 pid:(int)arg1 displayUUID:(id)arg2 contextID:(unsigned int)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)propertiesOneLevelMoreGeneric;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif