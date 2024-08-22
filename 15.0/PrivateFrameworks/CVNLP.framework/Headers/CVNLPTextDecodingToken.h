// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CVNLPTEXTDECODINGTOKEN_H
#define CVNLPTEXTDECODINGTOKEN_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface CVNLPTextDecodingToken : NSObject

@property (readonly, nonatomic) _NSRange activationRange; // ivar: _activationRange
@property (readonly, copy, nonatomic) NSNumber *alignmentScore; // ivar: _alignmentScore
@property (readonly, copy, nonatomic) NSString *fullString;
@property (readonly, nonatomic) BOOL hasPrecedingSpace; // ivar: _hasPrecedingSpace
@property (readonly, copy, nonatomic) NSNumber *score; // ivar: _score
@property (readonly, copy, nonatomic) NSString *string; // ivar: _string
@property (readonly, copy, nonatomic) NSString *terminatingCharacter; // ivar: _terminatingCharacter


-(id)initWithString:(id)arg0 score:(id)arg1 activationRange:(struct _NSRange )arg2 hasPrecedingSpace:(BOOL)arg3 ;
-(id)initWithString:(id)arg0 score:(id)arg1 activationRange:(struct _NSRange )arg2 terminatingCharacter:(id)arg3 ;
-(id)initWithString:(id)arg0 score:(id)arg1 alignmentScore:(id)arg2 activationRange:(struct _NSRange )arg3 terminatingCharacter:(id)arg4 ;


@end


#endif