// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFMYRIADGOODNESSSCOREOVERRIDESTATE_H
#define AFMYRIADGOODNESSSCOREOVERRIDESTATE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFMyriadGoodnessScoreOverrideState : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger overrideOption; // ivar: _overrideOption
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOverrideOption:(NSInteger)arg0 reason:(id)arg1 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif