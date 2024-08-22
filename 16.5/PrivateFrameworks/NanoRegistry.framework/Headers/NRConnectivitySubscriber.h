// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NRCONNECTIVITYSUBSCRIBER_H
#define NRCONNECTIVITYSUBSCRIBER_H


#import <Foundation/Foundation.h>


@interface NRConnectivitySubscriber : NSObject {
    BOOL _connected;
    NSUInteger _dropoutCounter;
}




+(BOOL)getDropoutCounter:(*NSUInteger)arg0 ;
-(id)init;


@end


#endif