// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBLAYOUTHELPERVIEW_H
#define DBLAYOUTHELPERVIEW_H

@class UIView;
@protocol DBLayoutHelperViewDelegate;



@interface DBLayoutHelperView : UIView

@property (weak, nonatomic) NSObject<DBLayoutHelperViewDelegate> *layoutDelegate; // ivar: _layoutDelegate


-(id)init;
-(void)layoutSubviews;


@end


#endif