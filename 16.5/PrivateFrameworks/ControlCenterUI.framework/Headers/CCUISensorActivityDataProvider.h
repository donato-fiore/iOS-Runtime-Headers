// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCUISENSORACTIVITYDATAPROVIDER_H
#define CCUISENSORACTIVITYDATAPROVIDER_H

@class NSSet, CCUISensorActivityData;

#import <Foundation/Foundation.h>


@interface CCUISensorActivityDataProvider : NSObject

@property (retain, nonatomic) NSSet *activeSensorActivityData; // ivar: _activeSensorActivityData
@property (copy, nonatomic) CCUISensorActivityData *mostRecentSensorActivityData; // ivar: _mostRecentSensorActivityData




@end


#endif