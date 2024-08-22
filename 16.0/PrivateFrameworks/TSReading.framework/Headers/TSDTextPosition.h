// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDTEXTPOSITION_H
#define TSDTEXTPOSITION_H

@class UITextPosition;



@interface TSDTextPosition : UITextPosition

@property (readonly, nonatomic) NSUInteger charIndex; // ivar: _charIndex
@property (readonly, nonatomic) BOOL endOfLineAffinity; // ivar: _eolAffinity
@property (readonly, nonatomic) BOOL isPreferredStart; // ivar: _isPreferredStart
@property (readonly, nonatomic) float preferredPosition; // ivar: _preferredPosition


+(id)textPositionWithCharIndex:(NSUInteger)arg0 ;
+(id)textPositionWithCharIndex:(NSUInteger)arg0 eolAffinity:(BOOL)arg1 preferredPosition:(float)arg2 isPreferredStart:(BOOL)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCharIndex:(NSUInteger)arg0 ;
-(id)initWithCharIndex:(NSUInteger)arg0 eolAffinity:(BOOL)arg1 preferredPosition:(float)arg2 isPreferredStart:(BOOL)arg3 ;
-(int)distanceFromPosition:(id)arg0 ;


@end


#endif