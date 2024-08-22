// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCPRIVATEDATASYNCCONDITIONREGION_H
#define FCPRIVATEDATASYNCCONDITIONREGION_H

@protocol FCPrivateDataSyncCondition;

#import <Foundation/Foundation.h>


@interface FCPrivateDataSyncConditionRegion : NSObject <FCPrivateDataSyncCondition>



@property (readonly, nonatomic, getter=isSatisfied) BOOL satisfied;


-(id)description;


@end


#endif