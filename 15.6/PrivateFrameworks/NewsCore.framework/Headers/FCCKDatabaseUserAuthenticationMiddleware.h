// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCCKDATABASEUSERAUTHENTICATIONMIDDLEWARE_H
#define FCCKDATABASEUSERAUTHENTICATIONMIDDLEWARE_H

@class NSString;
@protocol FCCKDatabaseOperationMiddleware;

#import <Foundation/Foundation.h>


@interface FCCKDatabaseUserAuthenticationMiddleware : NSObject <FCCKDatabaseOperationMiddleware>

 {
    BOOL _privateDataSyncingEnabled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)database:(id)arg0 willEnqueueOperation:(id)arg1 error:(*id)arg2 ;
-(id)init;


@end


#endif