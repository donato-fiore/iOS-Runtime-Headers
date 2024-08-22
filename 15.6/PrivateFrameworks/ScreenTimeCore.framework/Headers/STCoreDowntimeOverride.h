// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STCOREDOWNTIMEOVERRIDE_H
#define STCOREDOWNTIMEOVERRIDE_H

@class NSManagedObject, NSString, NSDate;
@protocol STSerializableManagedObject, STSyncableSubObject;


#import "STBlueprint.h"

@interface STCoreDowntimeOverride : NSManagedObject <STSerializableManagedObject, STSyncableSubObject>



@property (copy) NSString *calendarIdentifier;
@property (copy) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) STBlueprint *downtime;
@property (copy) NSDate *endDate;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isTombstoned;
@property (nonatomic) NSInteger state;
@property (readonly) Class superclass;
@property (readonly) NSObject<STSerializableManagedObject> *syncableRootObject;
@property (nonatomic) NSInteger type;


-(BOOL)updateWithDictionaryRepresentation:(id)arg0 ;
-(id)dictionaryRepresentation;


@end


#endif