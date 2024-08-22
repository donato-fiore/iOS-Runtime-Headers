// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFSTARTLOCALSEARCHFEEDBACK_H
#define SFSTARTLOCALSEARCHFEEDBACK_H

@class NSString;


#import "SFStartSearchFeedback.h"
#import "SFPerformEntityQueryCommand.h"

@interface SFStartLocalSearchFeedback : SFStartSearchFeedback

@property (copy, nonatomic) SFPerformEntityQueryCommand *entityQueryCommand; // ivar: _entityQueryCommand
@property (nonatomic) NSUInteger indexType; // ivar: _indexType
@property (copy, nonatomic) NSString *originatingApp; // ivar: _originatingApp


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEntityQueryCommand:(id)arg0 triggerEvent:(NSUInteger)arg1 searchType:(NSUInteger)arg2 indexType:(NSUInteger)arg3 queryId:(NSUInteger)arg4 originatingApp:(id)arg5 ;
-(id)initWithInput:(id)arg0 triggerEvent:(NSUInteger)arg1 indexType:(NSUInteger)arg2 ;
-(id)initWithInput:(id)arg0 triggerEvent:(NSUInteger)arg1 indexType:(NSUInteger)arg2 queryId:(NSUInteger)arg3 ;
-(id)initWithInput:(id)arg0 triggerEvent:(NSUInteger)arg1 searchType:(NSUInteger)arg2 indexType:(NSUInteger)arg3 queryId:(NSUInteger)arg4 ;
-(id)initWithInput:(id)arg0 triggerEvent:(NSUInteger)arg1 searchType:(NSUInteger)arg2 indexType:(NSUInteger)arg3 queryId:(NSUInteger)arg4 originatingApp:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif