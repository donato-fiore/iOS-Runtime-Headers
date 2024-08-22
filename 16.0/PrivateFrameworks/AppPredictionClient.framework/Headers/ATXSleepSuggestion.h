// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXSLEEPSUGGESTION_H
#define ATXSLEEPSUGGESTION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ATXSleepSuggestionOccurrence.h"

@interface ATXSleepSuggestion : NSObject <NSSecureCoding>



@property (retain, nonatomic) ATXSleepSuggestionOccurrence *occurrence; // ivar: _occurrence


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOccurence:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif