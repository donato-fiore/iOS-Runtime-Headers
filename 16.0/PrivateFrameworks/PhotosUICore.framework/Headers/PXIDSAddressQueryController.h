// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXIDSADDRESSQUERYCONTROLLER_H
#define PXIDSADDRESSQUERYCONTROLLER_H

@class NSMutableArray, NSMutableDictionary, IDSBatchIDQueryController, NSString;
@protocol IDSBatchIDQueryControllerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXIDSAddressQueryController : NSObject <IDSBatchIDQueryControllerDelegate>

 {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_queries;
    NSMutableDictionary *_queryStateForAddress;
    IDSBatchIDQueryController *_idsBatchIDQueryController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_callResultsHandlerForQueries:(id)arg0 ;
-(void)_idStatusUpdatedForDestinations:(id)arg0 service:(id)arg1 ;
-(void)_performBatchQueryForAddresses:(id)arg0 resultHandler:(id)arg1 ;
-(void)batchQueryController:(id)arg0 updatedDestinationsStatus:(id)arg1 onService:(id)arg2 error:(id)arg3 ;
-(void)dealloc;
-(void)performBatchQueryForAddresses:(id)arg0 resultHandler:(id)arg1 ;


@end


#endif