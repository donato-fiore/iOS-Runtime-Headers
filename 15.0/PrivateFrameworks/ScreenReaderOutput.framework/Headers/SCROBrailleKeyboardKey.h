// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCROBRAILLEKEYBOARDKEY_H
#define SCROBRAILLEKEYBOARDKEY_H

@class NSString;
@protocol NSSecureCoding;


#import "SCROBrailleKey.h"

@interface SCROBrailleKeyboardKey : SCROBrailleKey <NSSecureCoding>



@property (nonatomic) unsigned int keyCode; // ivar: _keyCode
@property (retain, nonatomic) NSString *keyString; // ivar: _keyString
@property (nonatomic) unsigned int modifiers; // ivar: _modifiers
@property (nonatomic) unsigned int virtualKeyCode; // ivar: _virtualKeyCode


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif