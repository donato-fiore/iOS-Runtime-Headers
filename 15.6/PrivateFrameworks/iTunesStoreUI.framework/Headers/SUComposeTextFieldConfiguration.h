// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUCOMPOSETEXTFIELDCONFIGURATION_H
#define SUCOMPOSETEXTFIELDCONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SUComposeTextFieldConfiguration : NSObject

@property (nonatomic) UIEdgeInsets borderInsets; // ivar: _borderInsets
@property (retain, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) NSUInteger maxLength; // ivar: _maxLength
@property (retain, nonatomic) NSString *placeholder; // ivar: _placeholder
@property (nonatomic, getter=isRequired) BOOL required; // ivar: _isRequired
@property (retain, nonatomic) NSString *value; // ivar: _value


-(void)dealloc;


@end


#endif