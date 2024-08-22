// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TCSIDSIDSTATUSCONTROLLER_H
#define TCSIDSIDSTATUSCONTROLLER_H

@class NSString, NSMutableDictionary, NSArray, IDSBatchIDQueryController, NSNumber;
@protocol IDSBatchIDQueryControllerDelegate, OS_dispatch_source, TCSIDSIDStatusControllerDelegate, TUIDSLookup;

#import <Foundation/Foundation.h>


@interface TCSIDSIDStatusController : NSObject <IDSBatchIDQueryControllerDelegate>

 {
    NSObject<OS_dispatch_source> *_timer;
    CGFloat _timeout;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<TCSIDSIDStatusControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableDictionary *destinationToStatus; // ivar: _destinationToStatus
@property (readonly, nonatomic) NSArray *destinations; // ivar: _destinations
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<TUIDSLookup> *item; // ivar: _item
@property (retain, nonatomic) IDSBatchIDQueryController *queryController; // ivar: _queryController
@property (readonly, nonatomic) NSNumber *status;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *tinCanHandle;


+(id)stringForDestinationToStatus:(id)arg0 ;
-(id)initWithItem:(id)arg0 delegate:(id)arg1 timeout:(CGFloat)arg2 ;
-(void)batchQueryController:(id)arg0 updatedDestinationsStatus:(id)arg1 onService:(id)arg2 error:(id)arg3 ;
-(void)dealloc;
-(void)execute;


@end


#endif