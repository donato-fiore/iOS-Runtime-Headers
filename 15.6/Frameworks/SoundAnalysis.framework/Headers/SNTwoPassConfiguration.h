// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNTWOPASSCONFIGURATION_H
#define SNTWOPASSCONFIGURATION_H

@protocol SNRequest;

#import <Foundation/Foundation.h>


@interface SNTwoPassConfiguration : NSObject

@property (readonly) NSObject<SNRequest> *firstPassRequest; // ivar: _firstPassRequest
@property (readonly) CGFloat historicalDataAmount; // ivar: _historicalDataAmount
@property (readonly) NSObject<SNRequest> *secondPassRequest; // ivar: _secondPassRequest


-(id)initWithFirstPassRequest:(id)arg0 secondPassRequest:(id)arg1 historicalDataAmount:(CGFloat)arg2 ;


@end


#endif