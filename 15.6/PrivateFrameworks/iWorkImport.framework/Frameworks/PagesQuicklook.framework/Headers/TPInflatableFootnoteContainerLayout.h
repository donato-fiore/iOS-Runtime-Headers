// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPINFLATABLEFOOTNOTECONTAINERLAYOUT_H
#define TPINFLATABLEFOOTNOTECONTAINERLAYOUT_H



#import "TPFootnoteContainerLayout.h"

@interface TPInflatableFootnoteContainerLayout : TPFootnoteContainerLayout {
    BOOL _inflated;
}




-(id)computeLayoutGeometry;
-(void)setNeedsInflation;
-(void)validate;


@end


#endif