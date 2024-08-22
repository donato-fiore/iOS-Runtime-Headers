// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIPERSONTRACKERMATCH_H
#define HMIPERSONTRACKERMATCH_H


#import <Foundation/Foundation.h>


@interface HMIPersonTrackerMatch : NSObject

@property (readonly) NSUInteger detectedPersonIndex; // ivar: _detectedPersonIndex
@property (readonly) NSUInteger projectedPersonIndex; // ivar: _projectedPersonIndex
@property (readonly) float score; // ivar: _score


-(id)initWithProjectedPersonIndex:(NSUInteger)arg0 detectedPersonIndex:(NSUInteger)arg1 score:(float)arg2 ;


@end


#endif