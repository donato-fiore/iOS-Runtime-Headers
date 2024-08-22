// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKCHOICECELL_H
#define FBKCHOICECELL_H

@class UITableViewCell;


#import "FBKQuestionChoice.h"

@interface FBKChoiceCell : UITableViewCell

@property (weak, nonatomic) FBKQuestionChoice *choice; // ivar: _choice


-(id)appIconForChoice:(id)arg0 ;
-(void)evaluateSelectionWithValue:(id)arg0 ;
-(void)evaluateSelectionWithValues:(id)arg0 ;
-(void)updateWithChoice:(id)arg0 ;


@end


#endif