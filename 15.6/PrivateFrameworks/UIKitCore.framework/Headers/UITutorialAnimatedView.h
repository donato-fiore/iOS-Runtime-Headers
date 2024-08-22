// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UITUTORIALANIMATEDVIEW_H
#define UITUTORIALANIMATEDVIEW_H

@class CALayer, CAPackage;


#import "UIView.h"

@interface UITutorialAnimatedView : UIView {
    CALayer *_packageLayer;
}


@property (nonatomic) NSInteger appearance; // ivar: _appearance
@property (retain, nonatomic) CAPackage *package; // ivar: _package


-(id)initWithKeyboardAppearance:(NSInteger)arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif