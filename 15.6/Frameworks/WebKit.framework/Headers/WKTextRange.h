// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKTEXTRANGE_H
#define WKTEXTRANGE_H

@class UITextRange, NSArray;



@interface WKTextRange : UITextRange

@property (nonatomic) CGRect endRect; // ivar: _endRect
@property (nonatomic) BOOL isEditable; // ivar: _isEditable
@property (nonatomic) BOOL isNone; // ivar: _isNone
@property (nonatomic) BOOL isRange; // ivar: _isRange
@property (nonatomic) NSUInteger selectedTextLength; // ivar: _selectedTextLength
@property (copy, nonatomic) NSArray *selectionRects; // ivar: _selectionRects
@property (nonatomic) CGRect startRect; // ivar: _startRect


+(id)textRangeWithState:(BOOL)arg0 isRange:(BOOL)arg1 isEditable:(BOOL)arg2 startRect:(struct CGRect )arg3 endRect:(struct CGRect )arg4 selectionRects:(id)arg5 selectedTextLength:(NSUInteger)arg6 ;
-(BOOL)_isCaret;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)end;
-(id)start;
-(void)dealloc;


@end


#endif