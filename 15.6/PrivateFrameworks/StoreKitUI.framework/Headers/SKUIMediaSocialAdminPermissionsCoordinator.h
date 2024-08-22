// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIMEDIASOCIALADMINPERMISSIONSCOORDINATOR_H
#define SKUIMEDIASOCIALADMINPERMISSIONSCOORDINATOR_H

@class NSArray, NSDate, NSMutableArray, NSNumber;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SKUIMediaSocialAdminPermissionsCoordinator : NSObject {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSArray *_lastKnownAuthors;
    NSDate *_lastRequestDate;
    NSMutableArray *_resultBlocks;
}


@property (readonly, copy) NSNumber *lastKnownAdminStatus;
@property (readonly, copy) NSArray *lastKnownAuthors;


+(id)sharedCoordinator;
-(id)init;
-(void)_authenticateOnCompletion:(id)arg0 ;
-(void)_fireResultsBlocksWithAuthors:(id)arg0 error:(id)arg1 ;
-(void)_getAuthors;
-(void)_handleOperationResponseWithAuthors:(id)arg0 error:(id)arg1 ;
-(void)_queueResultBlock:(id)arg0 ;
-(void)getAdminStatusWithOptions:(id)arg0 resultBlock:(id)arg1 ;
-(void)getAuthorsAndWaitWithOptions:(id)arg0 authorsBlock:(id)arg1 ;
-(void)getAuthorsWithOptions:(id)arg0 authorsBlock:(id)arg1 ;
-(void)reset;


@end


#endif