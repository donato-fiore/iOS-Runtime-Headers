// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DASWIDGETINFO_H
#define _DASWIDGETINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _DASWidgetInfo : NSObject

@property (readonly, copy, nonatomic) NSString *budgetID; // ivar: _budgetID
@property (readonly, copy, nonatomic) NSString *extensionBundleID; // ivar: _extensionBundleID
@property (copy, nonatomic) NSString *widgetID;


-(id)_initWithBudgetID:(id)arg0 extensionBundleID:(id)arg1 ;


@end


#endif