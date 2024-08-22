// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVXSPEECHSYNTHESISWORDTIMING_H
#define SVXSPEECHSYNTHESISWORDTIMING_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SVXSpeechSynthesisWordTiming : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) _NSRange range; // ivar: _range
@property (readonly, nonatomic) CGFloat timeInterval; // ivar: _timeInterval


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRange:(struct _NSRange )arg0 timeInterval:(CGFloat)arg1 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif