// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIKEYEVENTMAP_H
#define TIKEYEVENTMAP_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TIKeyEventMap : NSObject <NSSecureCoding>





+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)candidateNumberKey:(int)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)inputEventForInputString:(id)arg0 stringWithoutModifiers:(id)arg1 modifierFlags:(NSUInteger)arg2 keyboardState:(id)arg3 ;
-(id)remapKeyWithString:(id)arg0 stringWithoutModifiers:(id)arg1 modifierFlags:(NSUInteger)arg2 keyboardState:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif