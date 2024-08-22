// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIHOVERTOUCHDELIVERYTABLE_H
#define _UIHOVERTOUCHDELIVERYTABLE_H

@class NSMutableSet, NSSet;

#import <Foundation/Foundation.h>

#import "UITouch.h"

@interface _UIHoverTouchDeliveryTable : NSObject {
    NSMutableSet *_beginningGestureRecognizers;
    NSMutableSet *_updatingGestureRecognizers;
    NSMutableSet *_exitingGestureRecognizers;
}


@property (readonly, nonatomic) NSSet *gestureRecognizers;
@property (readonly, nonatomic) UITouch *touch; // ivar: _touch


-(NSInteger)updateGestureRecognizerForDelivery:(id)arg0 ;
-(id)initWithTouch:(id)arg0 ;
-(void)_cancelAllGestureRecognizers;
-(void)removeGestureRecognizer:(id)arg0 ;
-(void)updateForEvent:(id)arg0 forcingHitTest:(BOOL)arg1 ;


@end


#endif