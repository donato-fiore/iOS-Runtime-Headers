// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TISTATISTICCHANGE_H
#define TISTATISTICCHANGE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TIStatisticChange : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *inputMode; // ivar: _inputMode
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) int value; // ivar: _value


+(BOOL)_isSpringBoard;
+(BOOL)supportsSecureCoding;
+(id)statisticChangeWithName:(id)arg0 andValue:(int)arg1 andInputMode:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 andValue:(int)arg1 andInputMode:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif