// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMMPREDICTIONNOTIFICATION_H
#define PMMPREDICTIONNOTIFICATION_H


#import <Foundation/Foundation.h>


@interface PMMPredictionNotification : NSObject {
    id *_notificationToken;
}




+(void)postPredictionUpdate:(id)arg0 consumer:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithPredictionUpdateListener:(id)arg0 ;
-(void)dealloc;


@end


#endif