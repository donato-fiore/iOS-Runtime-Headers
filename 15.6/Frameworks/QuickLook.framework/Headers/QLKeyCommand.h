// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLKEYCOMMAND_H
#define QLKEYCOMMAND_H

@class UIKeyCommand;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface QLKeyCommand : NSObject <NSSecureCoding>



@property (retain, nonatomic) UIKeyCommand *keyCommand; // ivar: _keyCommand
@property NSUInteger keyCommandIdentifier; // ivar: _keyCommandIdentifier


+(BOOL)supportsSecureCoding;
+(id)keyCommandWithKeyCommand:(id)arg0 identifier:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif