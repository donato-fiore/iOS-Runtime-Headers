// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCKDATABASEQUALITYOFSERVICEUPGRADINGMIDDLEWARE_H
#define FCCKDATABASEQUALITYOFSERVICEUPGRADINGMIDDLEWARE_H

@class NSString;
@protocol FCCKDatabaseOperationMiddleware;

#import <Foundation/Foundation.h>


@interface FCCKDatabaseQualityOfServiceUpgradingMiddleware : NSObject <FCCKDatabaseOperationMiddleware>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)database:(id)arg0 willEnqueueOperation:(id)arg1 error:(*id)arg2 ;


@end


#endif