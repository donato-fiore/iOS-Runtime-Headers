// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKIDSBATCHIDQUERYCONTROLLERWRAPPER_H
#define PKIDSBATCHIDQUERYCONTROLLERWRAPPER_H

@class IDSBatchIDQueryController, NSString;
@protocol IDSBatchIDQueryControllerDelegate;

#import <Foundation/Foundation.h>


@interface PKIDSBatchIDQueryControllerWrapper : NSObject <IDSBatchIDQueryControllerDelegate>

 {
    id *_completion;
    IDSBatchIDQueryController *_batchIDQueryController;
    NSString *_service;
    BOOL _hasRunQuery;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)batchQueryController:(id)arg0 updatedDestinationsStatus:(id)arg1 onService:(id)arg2 error:(id)arg3 ;
-(void)reachableDestinationsForDestination:(id)arg0 service:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;


@end


#endif