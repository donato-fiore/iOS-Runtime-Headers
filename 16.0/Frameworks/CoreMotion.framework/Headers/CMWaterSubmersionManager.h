// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMWATERSUBMERSIONMANAGER_H
#define CMWATERSUBMERSIONMANAGER_H

@protocol OS_dispatch_queue, CMWaterSubmersionManagerDelegate;

#import <Foundation/Foundation.h>


@interface CMWaterSubmersionManager : NSObject {
    *void _locationConnection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}


@property (weak, nonatomic) NSObject<CMWaterSubmersionManagerDelegate> *delegate; // ivar: _delegate


+(BOOL)waterSubmersionAvailable;
+(NSInteger)authorizationStatus;
-(id)init;
-(void)_connect;
-(void)_disconnect;
-(void)_handleMessage:(struct shared_ptr<CLConnectionMessage> )arg0 ;
-(void)dealloc;
-(void)notifySubmersionStateProcessingCompleted;


@end


#endif