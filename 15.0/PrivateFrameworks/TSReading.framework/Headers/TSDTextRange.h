// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDTEXTRANGE_H
#define TSDTEXTRANGE_H

@class UITextRange;



@interface TSDTextRange : UITextRange

@property (nonatomic) BOOL isAtEndOfLine; // ivar: _eolAffinity
@property (readonly, nonatomic) float preferredEndPosition; // ivar: _preferredEndPosition
@property (readonly, nonatomic) float preferredStartPosition; // ivar: _preferredStartPosition
@property (nonatomic) _NSRange range; // ivar: _range


+(id)textRangeWithRange:(struct _NSRange )arg0 ;
+(id)textRangeWithRange:(struct _NSRange )arg0 eolAffinity:(BOOL)arg1 preferredStartPosition:(float)arg2 preferredEndPosition:(float)arg3 ;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)end;
-(id)initWithRange:(struct _NSRange )arg0 ;
-(id)initWithRange:(struct _NSRange )arg0 eolAffinity:(BOOL)arg1 preferredStartPosition:(float)arg2 preferredEndPosition:(float)arg3 ;
-(id)start;


@end


#endif