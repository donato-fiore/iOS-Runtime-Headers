// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDPANE_H
#define EDPANE_H


#import <Foundation/Foundation.h>

#import "EDReference.h"

@interface EDPane : NSObject {
    CGFloat mXSplitPosition;
    CGFloat mYSplitPosition;
    EDReference *mTopLeftCell;
    int mActivePane;
    int mPaneState;
}




+(id)pane;
-(CGFloat)xSplitPosition;
-(CGFloat)ySplitPosition;
-(id)description;
-(id)init;
-(id)topLeftCell;
-(int)activePane;
-(int)paneState;
-(void)setActivePane:(int)arg0 ;
-(void)setPaneState:(int)arg0 ;
-(void)setTopLeftCell:(id)arg0 ;
-(void)setXSplitPosition:(CGFloat)arg0 ;
-(void)setYSplitPosition:(CGFloat)arg0 ;


@end


#endif