// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDEFAULTFOCUSHAPTICFEEDBACKGENERATOR_H
#define _UIDEFAULTFOCUSHAPTICFEEDBACKGENERATOR_H

@class CARInputDeviceTouchpad, NSString, CARSessionStatus;
@protocol _UIFocusHapticFeedbackGenerator;

#import <Foundation/Foundation.h>


@interface _UIDefaultFocusHapticFeedbackGenerator : NSObject <_UIFocusHapticFeedbackGenerator>



@property (nonatomic) NSUInteger currentSenderID; // ivar: _currentSenderID
@property (retain, nonatomic) CARInputDeviceTouchpad *currentTouchpad; // ivar: _currentTouchpad
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CARSessionStatus *sessionStatus; // ivar: _sessionStatus
@property (readonly) Class superclass;


-(id)initWithScreen:(id)arg0 ;
-(void)performHapticFeedbackForFocusUpdateInContext:(id)arg0 ;


@end


#endif