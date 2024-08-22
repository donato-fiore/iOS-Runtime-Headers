// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TICURSOREVENT_H
#define TICURSOREVENT_H

@class NSString;


#import "TIUserAction.h"

@interface TICursorEvent : TIUserAction

@property (nonatomic) BOOL extendsPriorWord; // ivar: _extendsPriorWord
@property (copy, nonatomic) NSString *inWord; // ivar: _inWord
@property (nonatomic) _NSRange inWordRange; // ivar: _inWordRange
@property (nonatomic) BOOL isSelection; // ivar: _isSelection
@property (nonatomic) NSUInteger selectionLocation; // ivar: _selectionLocation


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTIKeyboardState:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif