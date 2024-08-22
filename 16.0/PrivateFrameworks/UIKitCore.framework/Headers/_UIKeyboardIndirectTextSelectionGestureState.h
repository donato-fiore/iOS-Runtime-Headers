// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIKEYBOARDINDIRECTTEXTSELECTIONGESTURESTATE_H
#define _UIKEYBOARDINDIRECTTEXTSELECTIONGESTURESTATE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _UIKeyboardIndirectTextSelectionGestureState : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger flickDirection; // ivar: _flickDirection
@property (nonatomic) BOOL isShiftKeyBeingHeld; // ivar: _isShiftKeyBeingHeld
@property (nonatomic) NSInteger state; // ivar: _state
@property (nonatomic) NSUInteger touchCount; // ivar: _touchCount
@property (nonatomic) CGPoint translation; // ivar: _translation
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif