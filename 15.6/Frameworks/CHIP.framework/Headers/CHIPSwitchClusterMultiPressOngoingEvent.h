// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPSWITCHCLUSTERMULTIPRESSONGOINGEVENT_H
#define CHIPSWITCHCLUSTERMULTIPRESSONGOINGEVENT_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPSwitchClusterMultiPressOngoingEvent : NSObject

@property (retain, nonatomic) NSNumber *currentNumberOfPressesCounted; // ivar: _currentNumberOfPressesCounted
@property (retain, nonatomic, getter=getNewPosition) NSNumber *newPosition; // ivar: _newPosition


-(id)init;


@end


#endif