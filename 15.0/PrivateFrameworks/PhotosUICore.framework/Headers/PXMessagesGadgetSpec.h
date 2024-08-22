// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXMESSAGESGADGETSPEC_H
#define PXMESSAGESGADGETSPEC_H



#import "PXGadgetSpec.h"

@interface PXMessagesGadgetSpec : PXGadgetSpec {
    CGSize _layoutReferenceSize;
}




+(CGFloat)verticalSpacing;
-(CGFloat)columnWidthForColumnSpan:(NSInteger)arg0 ;
-(id)initWithTraitCollection:(id)arg0 scrollAxis:(NSInteger)arg1 ;
-(struct UIEdgeInsets )contentInsets;


@end


#endif