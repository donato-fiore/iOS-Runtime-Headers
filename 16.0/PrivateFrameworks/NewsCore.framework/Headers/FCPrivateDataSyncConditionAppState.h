// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCPRIVATEDATASYNCCONDITIONAPPSTATE_H
#define FCPRIVATEDATASYNCCONDITIONAPPSTATE_H

@protocol FCPrivateDataSyncCondition;

#import <Foundation/Foundation.h>


@interface FCPrivateDataSyncConditionAppState : NSObject <FCPrivateDataSyncCondition>



@property (readonly, nonatomic, getter=isSatisfied) BOOL satisfied;


-(id)_appState;
-(id)description;


@end


#endif