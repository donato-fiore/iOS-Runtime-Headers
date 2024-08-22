// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NFTECHNOLOGYEVENT_H
#define NFTECHNOLOGYEVENT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NFTechnologyEvent : NSObject <NSSecureCoding>



@property (readonly, nonatomic) unsigned short systemCode; // ivar: _systemCode
@property (readonly, nonatomic) unsigned int technology; // ivar: _technology
@property (readonly, nonatomic) unsigned int terminalType; // ivar: _terminalType
@property (readonly, nonatomic) BOOL touchIDRequired; // ivar: _touchIDRequired
@property (readonly, nonatomic) unsigned char valueAddedServiceMode; // ivar: _valueAddedServiceMode
@property (readonly, nonatomic) BOOL vasSupported; // ivar: _vasSupported


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFieldNotification:(id)arg0 ;
-(id)initWithTechnology:(unsigned int)arg0 andValueAddedServiceMode:(unsigned int)arg1 ;
-(id)initWithTechnology:(unsigned int)arg0 andValueAddedServiceMode:(unsigned int)arg1 andSystemCode:(unsigned short)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif