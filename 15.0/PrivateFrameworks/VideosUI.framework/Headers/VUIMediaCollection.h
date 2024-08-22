// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIMEDIACOLLECTION_H
#define VUIMEDIACOLLECTION_H

@class NSDate, NSNumber;


#import "VUIMediaEntity.h"

@interface VUIMediaCollection : VUIMediaEntity

@property (readonly, copy, nonatomic) NSDate *addedToDate;
@property (readonly, copy, nonatomic) NSNumber *mediaItemCount;
@property (readonly, copy, nonatomic) NSNumber *seasonCount;


-(id)description;


@end


#endif