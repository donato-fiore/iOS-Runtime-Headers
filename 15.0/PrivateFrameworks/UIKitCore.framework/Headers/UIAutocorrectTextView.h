// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIAUTOCORRECTTEXTVIEW_H
#define UIAUTOCORRECTTEXTVIEW_H

@class NSString, UIFont;


#import "UIView.h"

@interface UIAutocorrectTextView : UIView {
    NSString *m_string;
    int m_type;
    int m_edgeType;
    UIFont *m_textFont;
}


@property (nonatomic) BOOL animating; // ivar: m_animating
@property (nonatomic) BOOL isLongString; // ivar: m_isLongString


-(BOOL)pointInside:(struct CGPoint )arg0 forEvent:(struct __GSEvent *)arg1 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 string:(id)arg1 type:(int)arg2 edgeType:(int)arg3 ;
-(struct CGRect )_calculateRectForExpandedHitRegion;
-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)setEdgeType:(int)arg0 ;


@end


#endif