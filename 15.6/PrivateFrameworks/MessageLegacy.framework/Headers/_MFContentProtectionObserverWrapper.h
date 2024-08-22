// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MFCONTENTPROTECTIONOBSERVERWRAPPER_H
#define _MFCONTENTPROTECTIONOBSERVERWRAPPER_H

@class MFWeakReferenceHolder;
@protocol MFContentProtectionObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _MFContentProtectionObserverWrapper : NSObject {
    MFWeakReferenceHolder *_observerReference;
}


@property (readonly, nonatomic) NSObject<MFContentProtectionObserver> *observer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)initWithObserver:(id)arg0 queue:(id)arg1 ;
-(void)dealloc;


@end


#endif