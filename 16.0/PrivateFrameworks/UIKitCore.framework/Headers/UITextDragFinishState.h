// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UITEXTDRAGFINISHSTATE_H
#define UITEXTDRAGFINISHSTATE_H

@class NSString;
@protocol UITextDragFinishState;

#import <Foundation/Foundation.h>


@interface UITextDragFinishState : NSObject <UITextDragFinishState>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dragTearoffOccured; // ivar: _dragTearoffOccured
@property (readonly) NSUInteger hash;
@property (nonatomic) CGPoint location; // ivar: _location
@property (readonly) Class superclass;




@end


#endif