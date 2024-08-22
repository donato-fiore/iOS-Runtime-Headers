// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMFITNESSMACHINEINTERNAL_H
#define CMFITNESSMACHINEINTERNAL_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CMFitnessMachineInternal : NSObject {
    *void fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
}




-(id)init;
-(void)_feedFitnessMachineData:(id)arg0 ;
-(void)_teardown;
-(void)dealloc;


@end


#endif