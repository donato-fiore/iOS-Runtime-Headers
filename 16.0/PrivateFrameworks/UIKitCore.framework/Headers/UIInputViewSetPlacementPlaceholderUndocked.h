// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIINPUTVIEWSETPLACEMENTPLACEHOLDERUNDOCKED_H
#define UIINPUTVIEWSETPLACEMENTPLACEHOLDERUNDOCKED_H



#import "UIInputViewSetPlacementUndocked.h"

@interface UIInputViewSetPlacementPlaceholderUndocked : UIInputViewSetPlacementUndocked {
    CGFloat _height;
}




+(id)placementWithHeight:(CGFloat)arg0 undockedOffset:(struct CGPoint )arg1 chromeBuffer:(struct UIEdgeInsets )arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)heightOfInputViews:(id)arg0 ;


@end


#endif