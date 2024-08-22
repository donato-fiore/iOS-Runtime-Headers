// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRSWITCHCLUSTERMULTIPRESSCOMPLETEEVENT_H
#define MTRSWITCHCLUSTERMULTIPRESSCOMPLETEEVENT_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRSwitchClusterMultiPressCompleteEvent : NSObject

@property (retain, nonatomic, getter=getNewPosition) NSNumber *newPosition; // ivar: _newPosition
@property (retain, nonatomic) NSNumber *totalNumberOfPressesCounted; // ivar: _totalNumberOfPressesCounted


-(id)description;
-(id)init;


@end


#endif