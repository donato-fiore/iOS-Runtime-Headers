// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRSWITCHCLUSTERMULTIPRESSCOMPLETEEVENT_H
#define MTRSWITCHCLUSTERMULTIPRESSCOMPLETEEVENT_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRSwitchClusterMultiPressCompleteEvent : NSObject <NSCopying>



@property (copy, nonatomic, getter=getNewPosition) NSNumber *newPosition;
@property (copy, nonatomic) NSNumber *previousPosition; // ivar: _previousPosition
@property (copy, nonatomic) NSNumber *totalNumberOfPressesCounted; // ivar: _totalNumberOfPressesCounted


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif