// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSELECTIONINPUT_H
#define PKSELECTIONINPUT_H


#import <Foundation/Foundation.h>


@interface PKSelectionInput : NSObject

@property (nonatomic) NSInteger inputType; // ivar: _inputType
@property (nonatomic) CGPoint location; // ivar: _location
@property (nonatomic) NSInteger selectionType; // ivar: _selectionType


+(id)inputWithType:(NSInteger)arg0 location:(struct CGPoint )arg1 inputType:(NSInteger)arg2 ;


@end


#endif