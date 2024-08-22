// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPSWITCHCLUSTERMULTIPRESSCOMPLETEEVENT_H
#define CHIPSWITCHCLUSTERMULTIPRESSCOMPLETEEVENT_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPSwitchClusterMultiPressCompleteEvent : NSObject

@property (retain, nonatomic, getter=getNewPosition) NSNumber *newPosition; // ivar: _newPosition
@property (retain, nonatomic) NSNumber *totalNumberOfPressesCounted; // ivar: _totalNumberOfPressesCounted


-(id)init;


@end


#endif