// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUTITLEVIEWUPDATE_H
#define NUTITLEVIEWUPDATE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NUTitleViewUpdate : NSObject

@property (copy, nonatomic) NSString *accessibilityTitle; // ivar: _accessibilityTitle
@property (nonatomic, getter=shouldCancelPendingUpdates) BOOL cancelPendingUpdates; // ivar: _cancelPendingUpdates
@property (nonatomic) CGFloat lingerTimeInterval; // ivar: _lingerTimeInterval
@property (nonatomic, getter=shouldSpeakAccessibilityTitleWhenDisplayed) BOOL speakAccessibilityTitleWhenDisplayed; // ivar: _speakAccessibilityTitleWhenDisplayed
@property (readonly, nonatomic) NSUInteger styleType; // ivar: _styleType
@property (nonatomic) NSInteger textAlignment; // ivar: _textAlignment
@property (readonly, nonatomic) id *value; // ivar: _value
@property (readonly, nonatomic) NSUInteger valueType; // ivar: _valueType


-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithAttributedText:(id)arg0 styleType:(NSUInteger)arg1 ;
-(id)initWithImage:(id)arg0 ;
-(id)initWithText:(id)arg0 styleType:(NSUInteger)arg1 ;
-(id)initWithText:(id)arg0 styleType:(NSUInteger)arg1 glyph:(id)arg2 ;
-(id)initWithValue:(id)arg0 valueType:(NSUInteger)arg1 styleType:(NSUInteger)arg2 ;


@end


#endif