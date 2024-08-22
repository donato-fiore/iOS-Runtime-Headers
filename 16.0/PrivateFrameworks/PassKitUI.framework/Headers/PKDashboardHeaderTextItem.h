// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDASHBOARDHEADERTEXTITEM_H
#define PKDASHBOARDHEADERTEXTITEM_H

@class UIColor, UIImage, NSString, UIMenu;
@protocol PKDashboardItem;

#import <Foundation/Foundation.h>


@interface PKDashboardHeaderTextItem : NSObject <PKDashboardItem>



@property (copy, nonatomic) id *action; // ivar: _action
@property (copy, nonatomic) UIColor *actionColor; // ivar: _actionColor
@property (copy, nonatomic) UIImage *actionImage; // ivar: _actionImage
@property (nonatomic) NSUInteger actionStyle; // ivar: _actionStyle
@property (copy, nonatomic) NSString *actionTitle; // ivar: _actionTitle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) UIMenu *menu; // ivar: _menu
@property (nonatomic) NSUInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) UIColor *titleColor; // ivar: _titleColor


+(id)identifier;
+(id)itemWithHeaderText:(id)arg0 ;


@end


#endif