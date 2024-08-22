// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTEMERGENCYMODE_H
#define CTEMERGENCYMODE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTEmergencyMode : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (nonatomic) BOOL isEmergencySetup; // ivar: _isEmergencySetup
@property (nonatomic) BOOL isEmergencyText; // ivar: _isEmergencyText
@property (readonly, nonatomic) BOOL isStewieActive; // ivar: _isStewieActive
@property (nonatomic) NSInteger state; // ivar: _state
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)convertFromEmergencyMode:(struct EmergencyMode *)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCTEmergencyMode:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEnabled:(BOOL)arg0 type:(NSInteger)arg1 isEmergencyText:(BOOL)arg2 ;
-(id)initWithEnabled:(BOOL)arg0 type:(NSInteger)arg1 isEmergencyText:(BOOL)arg2 isEmergencySetup:(BOOL)arg3 ;
-(id)initWithEnabled:(BOOL)arg0 type:(NSInteger)arg1 isEmergencyText:(BOOL)arg2 isEmergencySetup:(BOOL)arg3 isStewieActive:(BOOL)arg4 ;
-(id)initWithEnabled:(BOOL)arg0 type:(NSInteger)arg1 isEmergencyText:(BOOL)arg2 isEmergencySetup:(BOOL)arg3 isStewieActive:(BOOL)arg4 state:(NSInteger)arg5 ;
-(id)initWithEnabled:(BOOL)arg0 type:(NSInteger)arg1 isEmergencyText:(BOOL)arg2 isEmergencySetup:(BOOL)arg3 state:(NSInteger)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif