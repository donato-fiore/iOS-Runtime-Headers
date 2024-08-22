// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CWFXPCEVENT_H
#define CWFXPCEVENT_H

@class NSUUID, NSDictionary, NSString, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CWFXPCEvent : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (nonatomic) NSUInteger acknowledgementTimeout; // ivar: _acknowledgementTimeout
@property (copy, nonatomic) NSDictionary *info; // ivar: _info
@property (copy, nonatomic) NSString *interfaceName; // ivar: _interfaceName
@property (nonatomic) NSInteger internalType; // ivar: _internalType
@property (copy, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToXPCEvent:(id)arg0 ;
-(NSUInteger)hash;
-(id)__descriptionForEventType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif