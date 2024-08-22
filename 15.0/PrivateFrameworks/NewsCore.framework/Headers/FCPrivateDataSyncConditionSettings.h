// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCPRIVATEDATASYNCCONDITIONSETTINGS_H
#define FCPRIVATEDATASYNCCONDITIONSETTINGS_H

@protocol FCPrivateDataSyncCondition;

#import <Foundation/Foundation.h>


@interface FCPrivateDataSyncConditionSettings : NSObject <FCPrivateDataSyncCondition>



@property (readonly, nonatomic, getter=isSatisfied) BOOL satisfied;


-(id)description;


@end


#endif