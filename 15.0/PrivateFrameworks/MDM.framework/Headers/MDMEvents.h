// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MDMEVENTS_H
#define MDMEVENTS_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MDMEvents : NSObject {
    NSObject<OS_dispatch_queue> *_writerQueue;
}




+(id)sharedInstance;
-(id)init;
-(void)recordData:(id)arg0 forEvent:(id)arg1 ;
-(void)recordDateForEvent:(id)arg0 ;


@end


#endif