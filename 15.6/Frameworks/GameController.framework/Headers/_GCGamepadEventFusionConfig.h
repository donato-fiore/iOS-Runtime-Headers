// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GCGAMEPADEVENTFUSIONCONFIG_H
#define _GCGAMEPADEVENTFUSIONCONFIG_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _GCGamepadEventFusionConfig : NSObject <NSSecureCoding>

 {
    *int _matrix;
}


@property (readonly, nonatomic) NSUInteger sourceCount; // ivar: _sourceCount


+(BOOL)supportsSecureCoding;
-(BOOL)shouldPassElement:(NSInteger)arg0 forSourceAtIndex:(NSUInteger)arg1 ;
-(id)debugDescription;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSourceCount:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumeratePassedElementsForSourceAtIndex:(NSUInteger)arg0 withBlock:(id)arg1 ;
-(void)setPass:(BOOL)arg0 element:(NSInteger)arg1 forSourceAtIndex:(NSUInteger)arg2 ;


@end


#endif