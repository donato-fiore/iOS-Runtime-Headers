// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKNOTIFICATIONCOLLECTION_H
#define EKNOTIFICATIONCOLLECTION_H

@class NSSet;


#import "EKObject.h"
#import "EKSource.h"

@interface EKNotificationCollection : EKObject

@property (copy, nonatomic) NSSet *notifications;
@property (readonly, nonatomic) EKSource *source;


+(BOOL)isWeakRelationship;
+(Class)frozenClass;
+(id)knownRelationshipMultiValueKeys;
-(BOOL)_hasNotificationsCollectionFlag;
-(BOOL)save:(*id)arg0 ;
-(BOOL)validate:(*id)arg0 ;
-(id)initWithOptions:(id)arg0 ;
-(unsigned int)flags;
-(void)addNotification:(id)arg0 ;
-(void)removeNotification:(id)arg0 ;
-(void)setExternalID:(id)arg0 ;
-(void)setExternalIDTag:(id)arg0 ;
-(void)setFlags:(unsigned int)arg0 ;


@end


#endif