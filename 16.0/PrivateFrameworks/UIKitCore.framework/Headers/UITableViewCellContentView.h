// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UITABLEVIEWCELLCONTENTVIEW_H
#define UITABLEVIEWCELLCONTENTVIEW_H



#import "UIView.h"

@interface UITableViewCellContentView : UIView {
    ? _contentViewFlags;
}


@property (nonatomic, getter=_overriddenDefaultLayoutMargins, setter=_setOverriddenDefaultLayoutMargins:) NSDirectionalEdgeInsets overriddenDefaultLayoutMargins; // ivar: _overriddenDefaultLayoutMargins


+(id)classFallbacksForKeyedArchiver;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct UIEdgeInsets )_concreteDefaultLayoutMargins;
-(void)_tableViewCellContentViewCommonSetup;
-(void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg0 ;


@end


#endif