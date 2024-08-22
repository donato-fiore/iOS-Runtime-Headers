// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFREQUESTQUEUE_H
#define MFREQUESTQUEUE_H

@class NSConditionLock, NSMutableArray;

#import <Foundation/Foundation.h>


@interface MFRequestQueue : NSObject {
    NSConditionLock *_condition;
    NSMutableArray *_requests;
    NSMutableArray *_consumers;
    unsigned int _waitingOutside;
    unsigned int _waitingInside;
}




-(id)init;
-(void)_processRequests:(id)arg0 consumers:(id)arg1 ;
-(void)addRequest:(id)arg0 consumer:(id)arg1 ;
-(void)addRequests:(id)arg0 consumers:(id)arg1 ;
-(void)dealloc;
-(void)processRequest:(id)arg0 consumer:(id)arg1 ;
-(void)processRequests:(id)arg0 consumers:(id)arg1 ;
-(void)willAddRequests:(id)arg0 consumers:(id)arg1 ;


@end


#endif