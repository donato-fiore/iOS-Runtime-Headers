// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDASHBOARDTEXTACTIONITEM_H
#define PKDASHBOARDTEXTACTIONITEM_H

@class NSString;
@protocol PKDashboardItem;

#import <Foundation/Foundation.h>


@interface PKDashboardTextActionItem : NSObject <PKDashboardItem>



@property (copy, nonatomic) id *action; // ivar: _action
@property (nonatomic) NSInteger actionStyle; // ivar: _actionStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)identifier;


@end


#endif