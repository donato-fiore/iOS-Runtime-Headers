// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFACCESSIBILITYSTATE_H
#define AFACCESSIBILITYSTATE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFAccessibilityState : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger isVibrationDisabled; // ivar: _isVibrationDisabled
@property (readonly, nonatomic) NSInteger isVoiceOverTouchEnabled; // ivar: _isVoiceOverTouchEnabled


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIsVoiceOverTouchEnabled:(NSInteger)arg0 isVibrationDisabled:(NSInteger)arg1 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif