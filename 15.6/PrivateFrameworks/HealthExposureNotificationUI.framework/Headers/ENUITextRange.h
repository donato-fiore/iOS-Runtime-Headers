// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENUITEXTRANGE_H
#define ENUITEXTRANGE_H

@class UITextRange;



@interface ENUITextRange : UITextRange

@property (nonatomic) _NSRange range; // ivar: _range


+(id)rangeWithRange:(struct _NSRange )arg0 ;
-(BOOL)isEmpty;
-(id)end;
-(id)start;


@end


#endif