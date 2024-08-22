// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIKEYBOARDLAYOUT_H
#define TIKEYBOARDLAYOUT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TIKeyboardLayout : NSObject <NSSecureCoding>

 {
    NSUInteger _count;
    *_ShortRect _frames;
    NSUInteger _framesCapacity;
    char * _strings;
    NSUInteger _stringsSize;
    NSUInteger _stringsCapacity;
}


@property (readonly, nonatomic) CGRect frame; // ivar: _frame
@property (nonatomic) BOOL usesTwoHands; // ivar: _usesTwoHands


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)keyContainingPoint:(struct CGPoint )arg0 ;
-(NSUInteger)hash;
-(char *)firstKeyString;
-(id)description;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(struct CGRect )_decodeCGRectForKey:(id)arg0 withDecoder:(id)arg1 ;
-(void)_encodeCGRect:(struct CGRect )arg0 forKey:(id)arg1 withCoder:(id)arg2 ;
-(void)addKeyWithExactString:(id)arg0 frame:(struct CGRect )arg1 ;
-(void)addKeyWithString:(id)arg0 frame:(struct CGRect )arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)ensureFrameCapacity:(NSUInteger)arg0 ;
-(void)ensureStringCapacity:(NSUInteger)arg0 ;
-(void)enumerateKeysUsingBlock:(id)arg0 ;


@end


#endif