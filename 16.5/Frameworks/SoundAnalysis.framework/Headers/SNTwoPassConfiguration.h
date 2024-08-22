// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNTWOPASSCONFIGURATION_H
#define SNTWOPASSCONFIGURATION_H

@protocol SNRequest;

#import <Foundation/Foundation.h>


@interface SNTwoPassConfiguration : NSObject {
    id<SNRequest> *_firstPassRequest;
    id<SNRequest> *_secondPassRequest;
    CGFloat _historicalDataAmount;
}






@end


#endif