// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPPAIRINGCONFIGURATION_H
#define SPPAIRINGCONFIGURATION_H

@class NSData, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPPairingConfiguration : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSInteger batteryLevel; // ivar: _batteryLevel
@property (copy, nonatomic) NSData *collaborativeKeyC3; // ivar: _collaborativeKeyC3
@property (nonatomic) BOOL isZeus; // ivar: _isZeus
@property (copy, nonatomic) NSData *keyStatus; // ivar: _keyStatus
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *roleEmoji; // ivar: _roleEmoji
@property (nonatomic) NSInteger roleId; // ivar: _roleId
@property (copy, nonatomic) NSData *signatureS4; // ivar: _signatureS4


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 roleId:(NSInteger)arg1 roleEmoji:(id)arg2 keyStatus:(id)arg3 collaborativeKeyC3:(id)arg4 signatureS4:(id)arg5 isZeus:(BOOL)arg6 batteryLevel:(NSInteger)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif