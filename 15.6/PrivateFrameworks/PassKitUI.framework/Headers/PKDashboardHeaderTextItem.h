// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDASHBOARDHEADERTEXTITEM_H
#define PKDASHBOARDHEADERTEXTITEM_H

@class NSString;
@protocol PKDashboardItem;

#import <Foundation/Foundation.h>


@interface PKDashboardHeaderTextItem : NSObject <PKDashboardItem>



@property (copy, nonatomic) id *action; // ivar: _action
@property (copy, nonatomic) NSString *actionTitle; // ivar: _actionTitle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)identifier;
+(id)itemWithHeaderText:(id)arg0 ;


@end


#endif