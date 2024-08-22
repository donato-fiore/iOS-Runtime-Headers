// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RADIOMUTABLERECENTSTATIONSGROUP_H
#define RADIOMUTABLERECENTSTATIONSGROUP_H

@class NSString, NSArray;


#import "RadioRecentStationsGroup.h"

@interface RadioMutableRecentStationsGroup : RadioRecentStationsGroup

@property (nonatomic, getter=isActive) BOOL active;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSArray *stations;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif