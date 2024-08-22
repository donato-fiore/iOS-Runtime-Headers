// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCONTENTKEYPSSHREQUESTTRACKER_H
#define AVCONTENTKEYPSSHREQUESTTRACKER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface AVContentKeyPSSHRequestTracker : NSObject {
    NSInteger _totalExpectedRequestCount;
    NSMutableArray *_requests;
}




-(BOOL)haveAllRequestsBeenReceived;
-(id)initWithRequestCount:(NSInteger)arg0 ;
-(id)requests;
-(void)addRequest:(id)arg0 ;
-(void)dealloc;


@end


#endif