// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PERSISTENCEHELPERDATA_H
#define PERSISTENCEHELPERDATA_H

@class NSDate, NSDictionary;

#import <Foundation/Foundation.h>

#import "MiroBlueprint.h"

@interface PersistenceHelperData : NSObject

@property (retain, nonatomic) MiroBlueprint *blueprint; // ivar: _blueprint
@property (nonatomic) CGFloat customDuration; // ivar: _customDuration
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) NSInteger durationRange; // ivar: _durationRange
@property (retain, nonatomic) NSDate *lastSaveDate; // ivar: _lastSaveDate
@property (retain, nonatomic) NSDictionary *loadedFreezeRanges; // ivar: _loadedFreezeRanges
@property (nonatomic) NSInteger maxDurationRange; // ivar: _maxDurationRange
@property (nonatomic) NSInteger pickedItemCount; // ivar: _pickedItemCount
@property (nonatomic) NSInteger schema; // ivar: _schema
@property (retain, nonatomic) NSDate *viewedDate; // ivar: _viewedDate




@end


#endif