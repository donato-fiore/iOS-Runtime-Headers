// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TLKCONTENTSCONTAINERVIEW_H
#define TLKCONTENTSCONTAINERVIEW_H

@class NSMutableArray;


#import "TLKStackView.h"

@interface TLKContentsContainerView : TLKStackView

@property (retain, nonatomic) NSMutableArray *contentsViews; // ivar: _contentsViews


-(id)init;
-(void)updateWithContents:(id)arg0 ;


@end


#endif