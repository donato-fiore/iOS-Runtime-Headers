// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNPHONECALLOBSERVER_H
#define MNPHONECALLOBSERVER_H

@class CXCallObserver;

#import <Foundation/Foundation.h>


@interface MNPhoneCallObserver : NSObject {
    CXCallObserver *_observer;
}




+(id)sharedPhoneCallObserver;
-(BOOL)_isActiveCall:(id)arg0 ;
-(BOOL)hasActiveCalls;
-(id)init;
-(void)_startObserving;
-(void)dealloc;


@end


#endif