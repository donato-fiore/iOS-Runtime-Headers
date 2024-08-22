// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRSWITCHCLUSTERMULTIPRESSONGOINGEVENT_H
#define MTRSWITCHCLUSTERMULTIPRESSONGOINGEVENT_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRSwitchClusterMultiPressOngoingEvent : NSObject

@property (retain, nonatomic) NSNumber *currentNumberOfPressesCounted; // ivar: _currentNumberOfPressesCounted
@property (retain, nonatomic, getter=getNewPosition) NSNumber *newPosition; // ivar: _newPosition


-(id)description;
-(id)init;


@end


#endif