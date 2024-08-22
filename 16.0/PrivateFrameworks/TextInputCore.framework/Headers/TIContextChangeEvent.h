// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TICONTEXTCHANGEEVENT_H
#define TICONTEXTCHANGEEVENT_H

@class NSString;


#import "TIUserAction.h"

@interface TIContextChangeEvent : TIUserAction

@property (nonatomic) BOOL extendsPriorWord; // ivar: _extendsPriorWord
@property (copy, nonatomic) NSString *inWord; // ivar: _inWord
@property (nonatomic) _NSRange inWordRange; // ivar: _inWordRange
@property (nonatomic) BOOL isSelection; // ivar: _isSelection
@property (nonatomic) NSUInteger selectionLocation; // ivar: _selectionLocation


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTIKeyboardState:(id)arg0 andActionType:(int)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif