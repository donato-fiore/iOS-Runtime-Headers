// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMREMINDERSCONTENTEVENT_H
#define BMREMINDERSCONTENTEVENT_H

@class NSString;
@protocol BMIdentifiableContentEvent, BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating;

#import <Foundation/Foundation.h>


@interface BMRemindersContentEvent : NSObject <BMIdentifiableContentEvent, BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>



@property (readonly, nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) CGFloat completionDateTimestamp; // ivar: _completionDateTimestamp
@property (readonly, nonatomic) NSString *contentProtection; // ivar: _contentProtection
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *domainId; // ivar: _domainId
@property (readonly, nonatomic) CGFloat dueDateTimestamp; // ivar: _dueDateTimestamp
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAllDay; // ivar: _isAllDay
@property (readonly, nonatomic) NSString *notes; // ivar: _notes
@property (readonly, nonatomic) int priority; // ivar: _priority
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSString *uniqueId; // ivar: _uniqueId


+(BOOL)supportsSecureCoding;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isCompleteWithContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValidWithContext:(id)arg0 error:(*id)arg1 ;
-(id)encodeAsProto;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithUniqueId:(id)arg0 domainId:(id)arg1 absoluteTimestamp:(CGFloat)arg2 title:(id)arg3 notes:(id)arg4 isAllDay:(BOOL)arg5 completionDateTimestamp:(CGFloat)arg6 dueDateTimestamp:(CGFloat)arg7 priority:(int)arg8 ;
-(id)initWithUniqueId:(id)arg0 domainId:(id)arg1 absoluteTimestamp:(CGFloat)arg2 title:(id)arg3 notes:(id)arg4 isAllDay:(BOOL)arg5 completionDateTimestamp:(CGFloat)arg6 dueDateTimestamp:(CGFloat)arg7 priority:(int)arg8 contentProtection:(id)arg9 ;
-(id)json;
-(id)jsonDict;
-(id)proto;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif