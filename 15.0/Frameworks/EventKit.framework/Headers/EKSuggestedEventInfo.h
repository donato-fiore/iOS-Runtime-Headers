// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKSUGGESTEDEVENTINFO_H
#define EKSUGGESTEDEVENTINFO_H

@class NSString;


#import "EKObject.h"

@interface EKSuggestedEventInfo : EKObject

@property (nonatomic) NSUInteger changedFields;
@property (nonatomic) BOOL changesAcknowledged;
@property (copy, nonatomic) NSString *extractionGroupIdentifier;
@property (copy, nonatomic) NSString *opaqueKey;
@property (nonatomic) CGFloat timestamp;
@property (copy, nonatomic) NSString *uniqueKey;


+(Class)frozenClass;
+(id)knownIdentityKeysForComparison;
+(id)knownSingleValueKeysForComparison;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithEventStore:(id)arg0 opaqueKey:(id)arg1 uniqueKey:(id)arg2 ;
-(id)initWithEventStore:(id)arg0 opaqueKey:(id)arg1 uniqueKey:(id)arg2 extractionGroupIdentifier:(id)arg3 ;
-(id)initWithOpaqueKey:(id)arg0 uniqueKey:(id)arg1 ;
-(id)initWithOpaqueKey:(id)arg0 uniqueKey:(id)arg1 extractionGroupIdentifier:(id)arg2 ;
-(id)relatedEvent;
-(id)semanticIdentifier;


@end


#endif