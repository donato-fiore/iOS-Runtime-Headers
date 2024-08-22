// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIKBRTTOUCHHISTORYINFO_H
#define _UIKBRTTOUCHHISTORYINFO_H


#import <Foundation/Foundation.h>


@interface _UIKBRTTouchHistoryInfo : NSObject

@property (nonatomic) CGPoint actualLocation; // ivar: _actualLocation
@property (nonatomic) CGPoint errorVector; // ivar: _errorVector
@property (nonatomic) BOOL ignoreForDrift; // ivar: _ignoreForDrift
@property (nonatomic) BOOL ignoreTouch; // ivar: _ignoreTouch
@property (nonatomic) BOOL isActive; // ivar: _isActive
@property (nonatomic) BOOL isLeftHand; // ivar: _isLeftHand
@property (retain, nonatomic) id *touchIdentifier; // ivar: _touchIdentifier
@property (nonatomic) CGFloat touchTime; // ivar: _touchTime


-(id)description;
-(id)init;


@end


#endif