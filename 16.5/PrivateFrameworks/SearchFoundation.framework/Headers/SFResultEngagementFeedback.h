// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFRESULTENGAGEMENTFEEDBACK_H
#define SFRESULTENGAGEMENTFEEDBACK_H

@protocol NSCopying;


#import "SFResultFeedback.h"

@interface SFResultEngagementFeedback : SFResultFeedback <NSCopying>



@property (readonly, nonatomic) BOOL actionEngaged; // ivar: _actionEngaged
@property (nonatomic) NSUInteger actionTarget; // ivar: _actionTarget
@property (nonatomic) NSUInteger destination; // ivar: _destination
@property (nonatomic) BOOL matchesUnengagedSuggestion; // ivar: _matchesUnengagedSuggestion
@property (nonatomic) NSUInteger triggerEvent; // ivar: _triggerEvent


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithResult:(id)arg0 actionEngaged:(BOOL)arg1 triggerEvent:(NSUInteger)arg2 destination:(NSUInteger)arg3 ;
-(id)initWithResult:(id)arg0 triggerEvent:(NSUInteger)arg1 destination:(NSUInteger)arg2 ;
-(id)initWithResult:(id)arg0 triggerEvent:(NSUInteger)arg1 destination:(NSUInteger)arg2 actionTarget:(NSUInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif