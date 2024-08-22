// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DPWORDRECORD_H
#define _DPWORDRECORD_H

@class NSString, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _DPWordRecord : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *word; // ivar: _word
@property (readonly, nonatomic) NSNumber *wordPosition; // ivar: _wordPosition


+(BOOL)supportsSecureCoding;
+(id)bogusCharacter;
+(id)sequenceAndFragmentsFrom:(id)arg0 fragmentLimit:(NSUInteger)arg1 fragmentWidth:(NSUInteger)arg2 puzzlePieceCount:(NSUInteger)arg3 ;
+(id)word:(id)arg0 atPosition:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToWordRecord:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWord:(id)arg0 atPosition:(id)arg1 ;
-(id)sequenceWithoutPadding;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif