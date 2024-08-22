// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSOBSERVATIONTRANSFORMER_H
#define NSOBSERVATIONTRANSFORMER_H

@protocol NSObserver;


#import "NSObservationSource.h"
#import "NSString.h"

@interface NSObservationTransformer : NSObservationSource <NSObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)mapErrorsWithBlock:(id)arg0 ;
+(id)mapValuesWithBlock:(id)arg0 ;


@end


#endif