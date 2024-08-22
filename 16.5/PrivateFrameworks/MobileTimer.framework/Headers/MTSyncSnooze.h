// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSYNCSNOOZE_H
#define MTSYNCSNOOZE_H

@class NSDate, NSString;
@protocol MTProtoBufferSerializable, MTSerializable, SYChange, MTSyncable;

#import <Foundation/Foundation.h>


@interface MTSyncSnooze : NSObject <MTProtoBufferSerializable, MTSerializable, SYChange, MTSyncable>



@property (readonly, nonatomic) NSInteger changeType;
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *objectIdentifier;
@property (readonly, nonatomic) NSString *sequencer;
@property (retain, nonatomic) NSDate *snoozeDate; // ivar: _snoozeDate
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDate *syncDate;
@property (readonly, nonatomic) NSString *syncIdentifier;
@property (readonly, nonatomic) NSUInteger syncType;
@property (nonatomic) float syncVersion; // ivar: _syncVersion


+(BOOL)supportsSecureCoding;
+(id)deserialize:(id)arg0 ;
+(id)syncSnoozeOfObjectWithIdentifier:(id)arg0 snoozeDate:(id)arg1 date:(id)arg2 ;
+(id)syncSnoozeOfObjectWithIdentifier:(id)arg0 snoozeDate:(id)arg1 date:(id)arg2 version:(float)arg3 ;
-(BOOL)conflicts:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initFromDeserializer:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSnoozedObjectIdentifier:(id)arg0 snoozeDate:(id)arg1 date:(id)arg2 version:(float)arg3 ;
-(id)preferred:(id)arg0 ;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;
-(void)serializeWithSerializer:(id)arg0 ;


@end


#endif