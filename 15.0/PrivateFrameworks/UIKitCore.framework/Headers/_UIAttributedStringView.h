// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIATTRIBUTEDSTRINGVIEW_H
#define _UIATTRIBUTEDSTRINGVIEW_H

@class NSAttributedString;


#import "UIView.h"

@interface _UIAttributedStringView : UIView {
    NSAttributedString *_string;
}




+(Class)layerClass;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateContentsScale:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setString:(id)arg0 ;
-(void)setTextRotationAngle:(CGFloat)arg0 ;


@end


#endif