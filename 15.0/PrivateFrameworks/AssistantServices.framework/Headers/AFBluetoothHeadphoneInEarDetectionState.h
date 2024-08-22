// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFBLUETOOTHHEADPHONEINEARDETECTIONSTATE_H
#define AFBLUETOOTHHEADPHONEINEARDETECTIONSTATE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFBluetoothHeadphoneInEarDetectionState : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (readonly, nonatomic) NSInteger primaryEarbudSide; // ivar: _primaryEarbudSide
@property (readonly, nonatomic) NSInteger primaryInEarStatus; // ivar: _primaryInEarStatus
@property (readonly, nonatomic) NSInteger secondaryInEarStatus; // ivar: _secondaryInEarStatus


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIsEnabled:(BOOL)arg0 primaryEarbudSide:(NSInteger)arg1 primaryInEarStatus:(NSInteger)arg2 secondaryInEarStatus:(NSInteger)arg3 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif