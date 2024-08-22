// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UITABLEVIEWCELLCONTENTVIEW_H
#define UITABLEVIEWCELLCONTENTVIEW_H

@class NSString;
@protocol _UILayoutEngineSuspending;


#import "UIView.h"

@interface UITableViewCellContentView : UIView <_UILayoutEngineSuspending>

 {
    ? _contentViewFlags;
}


@property (nonatomic, getter=_isLayoutEngineSuspended, setter=_setLayoutEngineSuspended:) BOOL _layoutEngineSuspended; // ivar: _isLayoutEngineSuspended
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=_overriddenDefaultLayoutMargins, setter=_setOverriddenDefaultLayoutMargins:) NSDirectionalEdgeInsets overriddenDefaultLayoutMargins; // ivar: _overriddenDefaultLayoutMargins
@property (readonly) Class superclass;


+(id)classFallbacksForKeyedArchiver;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct UIEdgeInsets )_concreteDefaultLayoutMargins;
-(void)_tableViewCellContentViewCommonSetup;
-(void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg0 ;


@end


#endif