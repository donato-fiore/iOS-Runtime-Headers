// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RTIINPUTSOURCESTATE_H
#define RTIINPUTSOURCESTATE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RTIInputSourceState : NSObject <NSSecureCoding>

 {
    ? _inputSourceStateMask;
}


@property (nonatomic) BOOL centerFilled;
@property (nonatomic) BOOL floating;
@property (nonatomic) BOOL hardwareKeyboardMode;
@property (retain, nonatomic) NSString *inputMode; // ivar: _inputMode
@property (nonatomic) CGRect leftSplitFrame; // ivar: _leftSplitFrame
@property (nonatomic) BOOL minimized;
@property (nonatomic) CGRect rightSplitFrame; // ivar: _rightSplitFrame
@property (nonatomic) BOOL showingEmojiSearch;
@property (nonatomic) BOOL split;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif