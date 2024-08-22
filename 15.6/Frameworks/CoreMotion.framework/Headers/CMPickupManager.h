// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMPICKUPMANAGER_H
#define CMPICKUPMANAGER_H

@protocol OS_dispatch_queue, CMPickupDelegate;

#import <Foundation/Foundation.h>


@interface CMPickupManager : NSObject {
    NSObject<OS_dispatch_queue> *fPrivateQueue;
    *Dispatcher fDispatcher;
}


@property (nonatomic) NSObject<CMPickupDelegate> *delegate; // ivar: _delegate


+(BOOL)isPickupAvailable;
-(id)init;
-(void)dealloc;
-(void)onPickupStateUpdated:(struct Sample *)arg0 ;
-(void)startPickupUpdates;
-(void)stopPickupUpdates;


@end


#endif