// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFSTARTSEARCHFEEDBACK_H
#define SFSTARTSEARCHFEEDBACK_H

@class NSString;


#import "SFFeedback.h"

@interface SFStartSearchFeedback : SFFeedback

@property (copy, nonatomic) NSString *input; // ivar: _input
@property (nonatomic) NSUInteger searchType; // ivar: _searchType
@property (nonatomic) NSUInteger triggerEvent; // ivar: _triggerEvent
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInput:(id)arg0 triggerEvent:(NSUInteger)arg1 ;
-(id)initWithInput:(id)arg0 triggerEvent:(NSUInteger)arg1 queryId:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif