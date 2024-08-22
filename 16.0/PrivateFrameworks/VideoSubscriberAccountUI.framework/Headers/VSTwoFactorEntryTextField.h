// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSTWOFACTORENTRYTEXTFIELD_H
#define VSTWOFACTORENTRYTEXTFIELD_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VSTwoFactorEntryTextField : NSObject

@property (nonatomic) BOOL autoShowKeyboard; // ivar: _autoShowKeyboard
@property (nonatomic) NSInteger autocapitalizationType; // ivar: _autocapitalizationType
@property (nonatomic) NSInteger autocorrectionType; // ivar: _autocorrectionType
@property (nonatomic) NSUInteger expectedLength; // ivar: _expectedLength
@property (nonatomic) NSInteger keyboardType; // ivar: _keyboardType
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) NSInteger returnKeyType; // ivar: _returnKeyType
@property (copy, nonatomic) NSString *text; // ivar: _text


-(id)init;


@end


#endif