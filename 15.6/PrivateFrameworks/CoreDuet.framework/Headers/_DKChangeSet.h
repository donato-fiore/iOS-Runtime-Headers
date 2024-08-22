// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DKCHANGESET_H
#define _DKCHANGESET_H

@class NSString, NSUUID, NSDate, NSArray;
@protocol _DKProtobufConverting;

#import <Foundation/Foundation.h>


@interface _DKChangeSet : NSObject <_DKProtobufConverting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSUUID *deviceIdentifier; // ivar: _deviceIdentifier
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic) NSArray *eventIDsToDelete; // ivar: _eventIDsToDelete
@property (retain, nonatomic) NSArray *eventsToAdd; // ivar: _eventsToAdd
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger sequenceNumber; // ivar: _sequenceNumber
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *type; // ivar: _type


+(id)_createFromData:(id)arg0 deviceIdentifier:(id)arg1 sequenceNumber:(NSUInteger)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
+(id)additionChangeSetEntityName;
+(id)createFromData:(id)arg0 deviceIdentifier:(id)arg1 sequenceNumber:(NSUInteger)arg2 ;
+(id)createFromData:(id)arg0 deviceIdentifier:(id)arg1 sequenceNumber:(NSUInteger)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
+(id)dataFromCompressedChangeSet:(id)arg0 ;
+(id)deletionChangeSetEntityName;
+(id)fromPBCodable:(id)arg0 ;
-(id)asData;
-(id)initWithEventIDsToDelete:(id)arg0 deviceIdentifier:(id)arg1 sequenceNumber:(NSUInteger)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
-(id)initWithEventsToAdd:(id)arg0 deviceIdentifier:(id)arg1 sequenceNumber:(NSUInteger)arg2 startDate:(id)arg3 endDate:(id)arg4 ;
-(id)initWithEventsToAdd:(id)arg0 eventIDsToDelete:(id)arg1 deviceIdentifier:(id)arg2 sequenceNumber:(NSUInteger)arg3 ;
-(id)initWithEventsToAdd:(id)arg0 eventIDsToDelete:(id)arg1 deviceIdentifier:(id)arg2 sequenceNumber:(NSUInteger)arg3 startDate:(id)arg4 endDate:(id)arg5 type:(id)arg6 ;
-(id)initWithManagedObject:(id)arg0 ;
-(id)insertInManagedObjectContext:(id)arg0 ;
-(id)toPBCodable;


@end


#endif