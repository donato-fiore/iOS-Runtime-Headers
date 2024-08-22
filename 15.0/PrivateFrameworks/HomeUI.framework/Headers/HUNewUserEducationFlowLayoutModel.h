// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUNEWUSEREDUCATIONFLOWLAYOUTMODEL_H
#define HUNEWUSEREDUCATIONFLOWLAYOUTMODEL_H


#import <Foundation/Foundation.h>


@interface HUNewUserEducationFlowLayoutModel : NSObject

@property (readonly, nonatomic) NSInteger scrollDirection; // ivar: _scrollDirection


+(struct CGPoint )getTargetOffsetForProposedContentOffset:(struct CGPoint )arg0 horizontalOffset:(CGFloat)arg1 offsetAdjustment:(CGFloat)arg2 layoutAttributes:(id)arg3 ;
-(id)init;


@end


#endif