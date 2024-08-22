// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSOBSERVATIONSOURCE_H
#define NSOBSERVATIONSOURCE_H

@protocol NSObservable;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSObservationSource : NSObject <NSObservable>

 {
    id _observers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)_observerStorageOfSize:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif