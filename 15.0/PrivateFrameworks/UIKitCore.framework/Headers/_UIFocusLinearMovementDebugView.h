// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFOCUSLINEARMOVEMENTDEBUGVIEW_H
#define _UIFOCUSLINEARMOVEMENTDEBUGVIEW_H

@class NSArray;


#import "UIView.h"

@interface _UIFocusLinearMovementDebugView : UIView {
    NSArray *_items;
    NSArray *_groups;
    BOOL _colorCoding;
}


@property (readonly, nonatomic, getter=isGroupMode) BOOL groupMode;


-(id)_groupFramesFromGroups:(id)arg0 ;
-(id)_itemFramesFromItems:(id)arg0 ;
-(id)_lineSegmentsFromFrames:(id)arg0 ;
-(id)_primaryGroupFramesFromGroups:(id)arg0 ;
-(id)init;
-(id)initWithGroups:(id)arg0 ;
-(id)initWithItems:(id)arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif