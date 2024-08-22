// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSTEXTCHECKINGKEYEVENT_H
#define NSTEXTCHECKINGKEYEVENT_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSTextCheckingKeyEvent : NSObject <NSCopying, NSSecureCoding>

 {
    NSInteger _layoutType;
    NSUInteger _keyboardType;
    NSString *_identifier;
    NSString *_primaryLanguage;
    NSUInteger _flags;
    CGFloat _time;
    NSString *_keys;
    NSString *_ukeys;
}


@property (readonly, copy) NSString *characters;
@property (readonly, copy) NSString *charactersIgnoringModifiers;
@property (readonly) NSUInteger flags;
@property (readonly, copy) NSString *keyboardLayoutIdentifier;
@property (readonly) NSInteger keyboardLayoutType;
@property (readonly) NSUInteger keyboardType;
@property (readonly, copy) NSString *primaryLanguage;
@property (readonly) CGFloat timestamp;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKeyboardLayoutType:(NSInteger)arg0 keyboardType:(NSUInteger)arg1 identifier:(id)arg2 primaryLanguage:(id)arg3 flags:(NSUInteger)arg4 timestamp:(CGFloat)arg5 characters:(id)arg6 charactersIgnoringModifiers:(id)arg7 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif