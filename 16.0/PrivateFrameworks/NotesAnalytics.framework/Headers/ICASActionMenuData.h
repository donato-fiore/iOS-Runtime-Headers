// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASACTIONMENUDATA_H
#define ICASACTIONMENUDATA_H

@class NSString;
@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASActionMenuContextType.h"
#import "ICASActionMenuUsageType.h"

@interface ICASActionMenuData : NSObject <AADataEventType>



@property (readonly, nonatomic) ICASActionMenuContextType *actionMenuContextType; // ivar: _actionMenuContextType
@property (readonly, nonatomic) NSString *actionMenuSelection; // ivar: _actionMenuSelection
@property (readonly, nonatomic) ICASActionMenuUsageType *actionMenuUsageType; // ivar: _actionMenuUsageType


+(id)dataName;
-(id)initWithActionMenuUsageType:(id)arg0 actionMenuContextType:(id)arg1 actionMenuSelection:(id)arg2 ;
-(id)toDict;


@end


#endif