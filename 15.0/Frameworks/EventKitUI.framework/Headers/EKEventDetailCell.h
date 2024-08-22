// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKEVENTDETAILCELL_H
#define EKEVENTDETAILCELL_H

@class EKEvent;


#import "EKUITableViewCell.h"

@interface EKEventDetailCell : EKUITableViewCell {
    EKEvent *_event;
    BOOL _editable;
    CGFloat _lastLaidOutWidth;
    int _lastLaidOutPosition;
}


@property (readonly, nonatomic) BOOL isEditable;


+(CGFloat)_scaledDistanceCalculatedFromBottomToBaseline:(CGFloat)arg0 ;
+(CGFloat)_scaledDistanceCalculatedFromTopFromBaseline:(CGFloat)arg0 ;
+(CGFloat)detailsBottomVerticalInset;
+(CGFloat)detailsCellDefaultHeight;
+(CGFloat)detailsPostLabelSpace;
+(CGFloat)detailsTopVerticalInset;
+(id)_bodyFontAtDefaultSize;
-(BOOL)needsLayoutForWidth:(CGFloat)arg0 position:(int)arg1 ;
-(BOOL)update;
-(CGFloat)detailsLeftInset;
-(CGFloat)detailsRightInset;
-(id)initWithEvent:(id)arg0 editable:(BOOL)arg1 ;
-(id)initWithEvent:(id)arg0 editable:(BOOL)arg1 style:(NSInteger)arg2 ;
-(void)layoutForWidth:(CGFloat)arg0 position:(int)arg1 ;
-(void)layoutMarginsDidChange;
-(void)setEvent:(id)arg0 ;
-(void)sizeToFit;


@end


#endif