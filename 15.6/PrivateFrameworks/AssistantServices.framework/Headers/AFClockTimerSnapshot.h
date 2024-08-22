// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFCLOCKTIMERSNAPSHOT_H
#define AFCLOCKTIMERSNAPSHOT_H

@class NSDate, NSString, NSOrderedSet, NSDictionary;
@protocol AFContextSnapshot, NSCopying, NSSecureCoding, AFDictionaryConvertible;

#import <Foundation/Foundation.h>


@interface AFClockTimerSnapshot : NSObject <AFContextSnapshot, NSCopying, NSSecureCoding, AFDictionaryConvertible>



@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger generation; // ivar: _generation
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSOrderedSet *notifiedFiringTimerIDs; // ivar: _notifiedFiringTimerIDs
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSDictionary *timersByID; // ivar: _timersByID


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)hasFiringTimers;
-(BOOL)isEqual:(id)arg0 ;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)ad_shortDescription;
-(id)buildDictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)firingTimers;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithGeneration:(NSUInteger)arg0 date:(id)arg1 timersByID:(id)arg2 notifiedFiringTimerIDs:(id)arg3 ;
-(id)initWithSerializedBackingStore:(id)arg0 ;
-(id)mostRecentFiringTimer;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(id)serializedBackingStore;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif