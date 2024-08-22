// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXINFORMATIONDISMISSRECORD_H
#define ATXINFORMATIONDISMISSRECORD_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface ATXInformationDismissRecord : NSObject

@property (readonly, nonatomic) NSDate *blockCriterionUntilDate; // ivar: _blockCriterionUntilDate
@property (readonly, nonatomic) NSDate *blockWidgetUntilDate; // ivar: _blockWidgetUntilDate
@property (readonly, nonatomic) NSString *criterion; // ivar: _criterion
@property (readonly, nonatomic) NSString *widgetBundleId; // ivar: _widgetBundleId


-(id)init;
-(id)initWithWidgetBundleId:(id)arg0 criterion:(id)arg1 blockWidgetUntilDate:(id)arg2 blockCriterionUntilDate:(id)arg3 ;


@end


#endif