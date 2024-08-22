// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TIKEYBOARDINPUT_H
#define TIKEYBOARDINPUT_H

@class NSString;
@protocol NSSecureCoding, NSCopying><NSObject><NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TIKeyboardCandidate.h"
#import "TIHandwritingStrokes.h"
#import "TIKeyboardTouchEvent.h"

@interface TIKeyboardInput : NSObject <NSSecureCoding>

 {
    ? _flags;
}


@property (retain, nonatomic) TIKeyboardCandidate *acceptedCandidate; // ivar: _acceptedCandidate
@property (nonatomic, getter=isAutoshifted) BOOL autoshifted;
@property (nonatomic, getter=isBackspace) BOOL backspace; // ivar: _backspace
@property (nonatomic, getter=isDoubleSpace) BOOL doubleSpace;
@property (nonatomic, getter=isExpandSegment) BOOL expandSegment;
@property (nonatomic, getter=isFlick) BOOL flick;
@property (nonatomic, getter=isGesture) BOOL gesture;
@property (copy, nonatomic) TIHandwritingStrokes *handwritingStrokes; // ivar: _handwritingStrokes
@property (copy, nonatomic) NSString *inputManagerHint; // ivar: _inputManagerHint
@property (nonatomic, getter=isMultitap) BOOL multitap;
@property (copy, nonatomic) NSObject<NSCopying><NSObject><NSSecureCoding> *object;
@property (nonatomic, getter=isPopupVariant) BOOL popupVariant;
@property (nonatomic, getter=isRapidDelete) BOOL rapidDelete;
@property (nonatomic, getter=isShiftDown) BOOL shiftDown;
@property (nonatomic, getter=isShrinkSegment) BOOL shrinkSegment;
@property (copy, nonatomic) NSString *string; // ivar: _string
@property (nonatomic, getter=isSynthesizedByAcceptingCandidate) BOOL synthesizedByAcceptingCandidate;
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (retain, nonatomic) TIKeyboardTouchEvent *touchEvent; // ivar: _touchEvent
@property (nonatomic) NSInteger transliterationType; // ivar: _transliterationType
@property (nonatomic, getter=isUppercase) BOOL uppercase;


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif