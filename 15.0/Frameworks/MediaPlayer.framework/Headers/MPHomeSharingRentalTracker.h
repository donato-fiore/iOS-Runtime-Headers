// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPHOMESHARINGRENTALTRACKER_H
#define MPHOMESHARINGRENTALTRACKER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MPHomeSharingRentalTracker : NSObject {
    NSObject<OS_dispatch_queue> *_rentalTrackerQueue;
    NSMutableDictionary *_rentals;
}




+(id)sharedInstance;
-(id)_init;
-(void)_saveRentals;
-(void)addRentalWithItemID:(NSUInteger)arg0 databaseID:(id)arg1 ;
-(void)removeAllRentalsForDatabaseID:(id)arg0 ;
-(void)removeRentalWithItemID:(NSUInteger)arg0 ;


@end


#endif