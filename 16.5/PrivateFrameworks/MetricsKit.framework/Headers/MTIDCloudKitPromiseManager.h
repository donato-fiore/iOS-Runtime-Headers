// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTIDCLOUDKITPROMISEMANAGER_H
#define MTIDCLOUDKITPROMISEMANAGER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MTIDCloudKitPromiseManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (retain, nonatomic) NSMutableDictionary *dict; // ivar: _dict


-(id)initWithCallbackQueue:(id)arg0 ;
-(id)waitForRecordToSync:(id)arg0 timeout:(CGFloat)arg1 ;
-(void)finishPromisesOfRecord:(id)arg0 ;


@end


#endif