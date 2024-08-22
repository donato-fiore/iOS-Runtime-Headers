// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISWIPEACTION_H
#define UISWIPEACTION_H



#import "UIContextualAction.h"
#import "UIVisualEffect.h"
#import "UIColor.h"
#import "UIImage.h"

@interface UISwipeAction : UIContextualAction

@property (copy, nonatomic) UIVisualEffect *backgroundEffect; // ivar: _backgroundEffect
@property (nonatomic) BOOL canBeTriggeredBySwipe; // ivar: _canBeTriggeredBySwipe
@property (copy, nonatomic) UIColor *color;
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (copy, nonatomic) UIImage *icon;
@property (nonatomic) BOOL resetsSwipedRow; // ivar: _resetsSwipedRow


+(id)swipeActionWithStyle:(NSInteger)arg0 title:(id)arg1 handler:(id)arg2 ;
-(id)init;
-(void)resetSwipedRow;


@end


#endif