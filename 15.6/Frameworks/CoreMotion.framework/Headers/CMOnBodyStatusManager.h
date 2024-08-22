// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMONBODYSTATUSMANAGER_H
#define CMONBODYSTATUSMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CMOnBodyStatusManager : NSObject {
    *void fLocationdConnection;
    BOOL fSubscribedToOnBodyStatusDetection;
    NSObject<OS_dispatch_queue> *fOnBodyStatusQueue;
    id *fOnBodyStatusHandler;
    NSObject<OS_dispatch_queue> *fPrivateQueue;
}




+(BOOL)isOnBodyStatusDetectionAvailable;
+(id)sharedOnBodyStatusManager;
-(id)init;
-(void)connect;
-(void)dealloc;
-(void)disconnect;
-(void)setPropertiesWithDictionary:(id)arg0 ;
-(void)startOnBodyStatusDetectionPrivateToQueue:(id)arg0 withParameters:(id)arg1 handler:(id)arg2 ;
-(void)startOnBodyStatusDetectionToQueue:(id)arg0 withParameters:(id)arg1 handler:(id)arg2 ;
-(void)stopOnBodyStatusDetection;
-(void)stopOnBodyStatusDetectionPrivate;


@end


#endif