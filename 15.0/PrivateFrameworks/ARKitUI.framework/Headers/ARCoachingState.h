// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARCOACHINGSTATE_H
#define ARCOACHINGSTATE_H


#import <Foundation/Foundation.h>

#import "ARCoachingOverlayView.h"

@interface ARCoachingState : NSObject

@property (readonly, nonatomic) BOOL isViewActiveForState;
@property (readonly, nonatomic) NSInteger requirements;
@property (weak, nonatomic) ARCoachingOverlayView *view; // ivar: _view


-(id)doAction:(NSInteger)arg0 ;
-(id)initWithView:(id)arg0 ;
-(void)enter;
-(void)exit;


@end


#endif