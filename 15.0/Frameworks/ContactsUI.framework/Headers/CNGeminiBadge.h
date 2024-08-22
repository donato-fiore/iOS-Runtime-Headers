// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNGEMINIBADGE_H
#define CNGEMINIBADGE_H

@class UIView, NSDictionary;


#import "CNLabeledBadge.h"

@interface CNGeminiBadge : UIView

@property (retain, nonatomic) CNLabeledBadge *labeledBadge; // ivar: _labeledBadge
@property (copy, nonatomic) NSDictionary *viewAttributes;


+(id)geminiBadgeWithText:(id)arg0 ;
-(void)setText:(id)arg0 ;


@end


#endif