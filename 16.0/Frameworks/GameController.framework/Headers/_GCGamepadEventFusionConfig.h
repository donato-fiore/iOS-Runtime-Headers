// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GCGAMEPADEVENTFUSIONCONFIG_H
#define _GCGAMEPADEVENTFUSIONCONFIG_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _GCGamepadEventFusionConfig : NSObject <NSSecureCoding>

 {
    *unsigned char _matrix;
}


@property (readonly, nonatomic) NSUInteger sourceCount; // ivar: _sourceCount


+(BOOL)supportsSecureCoding;
-(id)debugDescription;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSourceCount:(NSUInteger)arg0 ;
-(unsigned char)passRuleForElement:(NSInteger)arg0 forSourceAtIndex:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateElementsForSourceAtIndex:(NSUInteger)arg0 withBlock:(id)arg1 ;
-(void)setPassRule:(unsigned char)arg0 forElement:(NSInteger)arg1 forSourceAtIndex:(NSUInteger)arg2 ;


@end


#endif