// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSOBSERVATIONSINK_H
#define NSOBSERVATIONSINK_H

@protocol NSObserver;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSObservationSink : NSObject <NSObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)handleErrorsWithBlock:(id)arg0 ;
+(id)handleValuesWithBlock:(id)arg0 ;


@end


#endif