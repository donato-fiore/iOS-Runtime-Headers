// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCWEEKLYGOALDISPLAYCONTEXT_H
#define FCCWEEKLYGOALDISPLAYCONTEXT_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface FCCWeeklyGoalDisplayContext : NSObject

@property (readonly, nonatomic) NSUInteger displayCount; // ivar: _displayCount
@property (readonly, nonatomic) NSDate *lastDisplayDate; // ivar: _lastDisplayDate


-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithDisplayCount:(NSInteger)arg0 lastDisplayDate:(id)arg1 ;


@end


#endif