// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTSYNCDISMISS_H
#define MTSYNCDISMISS_H

@class NSDate, NSString;
@protocol SYChange, MTProtoBufferSerializable, MTSerializable, MTSyncable;

#import <Foundation/Foundation.h>


@interface MTSyncDismiss : NSObject <SYChange, MTProtoBufferSerializable, MTSerializable, MTSyncable>



@property (readonly, nonatomic) NSInteger changeType;
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDate *dismissDate; // ivar: _dismissDate
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *objectIdentifier;
@property (readonly, nonatomic) NSString *sequencer;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDate *syncDate;
@property (readonly, nonatomic) NSString *syncIdentifier;
@property (readonly, nonatomic) NSUInteger syncType;
@property (nonatomic) float syncVersion; // ivar: _syncVersion


+(BOOL)supportsSecureCoding;
+(id)deserialize:(id)arg0 ;
+(id)syncDismissOfObjectWithIdentifier:(id)arg0 dismissDate:(id)arg1 date:(id)arg2 ;
+(id)syncDismissOfObjectWithIdentifier:(id)arg0 dismissDate:(id)arg1 date:(id)arg2 version:(float)arg3 ;
-(BOOL)conflicts:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initFromDeserializer:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDismissedObjectIdentifier:(id)arg0 dismissDate:(id)arg1 date:(id)arg2 version:(float)arg3 ;
-(id)preferred:(id)arg0 ;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;
-(void)serializeWithSerializer:(id)arg0 ;


@end


#endif