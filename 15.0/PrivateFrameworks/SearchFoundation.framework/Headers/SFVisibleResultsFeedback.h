// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFVISIBLERESULTSFEEDBACK_H
#define SFVISIBLERESULTSFEEDBACK_H

@class NSArray;
@protocol NSCopying;


#import "SFFeedback.h"
#import "SFSearchResult.h"

@interface SFVisibleResultsFeedback : SFFeedback <NSCopying>



@property (retain, nonatomic) SFSearchResult *goTakeoverResult; // ivar: _goTakeoverResult
@property (copy, nonatomic) NSArray *results; // ivar: _results
@property (nonatomic) NSUInteger triggerEvent; // ivar: _triggerEvent
@property (retain, nonatomic) NSArray *uniqueIdentifiersOfVisibleCardSections; // ivar: _uniqueIdentifiersOfVisibleCardSections
@property (retain, nonatomic) NSArray *uniqueIdsOfVisibleButtons; // ivar: _uniqueIdsOfVisibleButtons


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResults:(id)arg0 triggerEvent:(NSUInteger)arg1 ;
-(id)initWithResults:(id)arg0 triggerEvent:(NSUInteger)arg1 visibleButtons:(id)arg2 visibleCardSections:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif