// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICONTEXTMENUACCESSORYVIEW_H
#define _UICONTEXTMENUACCESSORYVIEW_H



#import "UIView.h"

@interface _UIContextMenuAccessoryView : UIView

@property (nonatomic) ? anchor; // ivar: _anchor
@property (nonatomic) NSUInteger location; // ivar: _location
@property (nonatomic) CGPoint offset; // ivar: _offset
@property (nonatomic) NSUInteger trackingAxis; // ivar: _trackingAxis


-(id)initWithFrame:(struct CGRect )arg0 configuration:(struct ? )arg1 ;
-(struct CGPoint )attachmentOffsetWithReferenceFrame:(struct CGRect )arg0 ;
-(void)setVisible:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif