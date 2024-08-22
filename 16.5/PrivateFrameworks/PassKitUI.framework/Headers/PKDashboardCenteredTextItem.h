// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDASHBOARDCENTEREDTEXTITEM_H
#define PKDASHBOARDCENTEREDTEXTITEM_H

@class NSString;
@protocol PKDashboardItem;

#import <Foundation/Foundation.h>


@interface PKDashboardCenteredTextItem : NSObject <PKDashboardItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)identifier;


@end


#endif