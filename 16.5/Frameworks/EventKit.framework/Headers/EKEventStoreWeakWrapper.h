// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKEVENTSTOREWEAKWRAPPER_H
#define EKEVENTSTOREWEAKWRAPPER_H


#import <Foundation/Foundation.h>

#import "EKEventStore.h"

@interface EKEventStoreWeakWrapper : NSObject {
    *void _unsafeRawPointer;
    EKEventStore *_weakEventStore;
}


@property (readonly, nonatomic) *void unsafeRawPointer;
@property (readonly, nonatomic) EKEventStore *weakEventStore;


-(id)initWithEventStore:(id)arg0 ;


@end


#endif