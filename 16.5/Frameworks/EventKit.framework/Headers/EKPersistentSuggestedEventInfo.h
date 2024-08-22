// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKPERSISTENTSUGGESTEDEVENTINFO_H
#define EKPERSISTENTSUGGESTEDEVENTINFO_H

@class NSString, NSDate;


#import "EKPersistentObject.h"
#import "EKPersistentEvent.h"

@interface EKPersistentSuggestedEventInfo : EKPersistentObject

@property (nonatomic) NSUInteger changedFields;
@property (nonatomic) BOOL changesAcknowledged;
@property (copy, nonatomic) NSString *extractionGroupIdentifier;
@property (copy, nonatomic) NSString *opaqueKey;
@property (nonatomic) EKPersistentEvent *owner;
@property (copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSString *uniqueKey;


+(Class)meltedClass;
+(id)relations;
+(id)suggestedEventInfoWithOpaqueKey:(id)arg0 uniqueKey:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)semanticIdentifier;
-(int)entityType;


@end


#endif