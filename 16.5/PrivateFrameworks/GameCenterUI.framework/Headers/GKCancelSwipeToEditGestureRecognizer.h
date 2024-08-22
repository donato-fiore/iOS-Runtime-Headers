// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKCANCELSWIPETOEDITGESTURERECOGNIZER_H
#define GKCANCELSWIPETOEDITGESTURERECOGNIZER_H

@class UITapGestureRecognizer;


#import "GKCollectionViewCell.h"

@interface GKCancelSwipeToEditGestureRecognizer : UITapGestureRecognizer

@property (retain, nonatomic) GKCollectionViewCell *currentEditingCell; // ivar: _currentEditingCell


-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif