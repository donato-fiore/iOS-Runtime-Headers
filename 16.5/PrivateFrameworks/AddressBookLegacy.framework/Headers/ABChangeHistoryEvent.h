// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABCHANGEHISTORYEVENT_H
#define ABCHANGEHISTORYEVENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ABChangeHistoryEvent : NSObject

@property (readonly, nonatomic) int entityType; // ivar: _entityType
@property (readonly, nonatomic) int eventType; // ivar: _eventType
@property (readonly, nonatomic) NSString *externalID; // ivar: _externalID
@property (readonly, nonatomic) BOOL imagesChanged; // ivar: _imagesChanged
@property (readonly, nonatomic) NSString *linkToPersonUUID; // ivar: _linkToPersonUUID
@property (readonly, nonatomic) int personLink; // ivar: _personLink
@property (readonly, nonatomic) NSString *personLinkUUID; // ivar: _personLinkUUID
@property (readonly, nonatomic) NSString *recordGUID; // ivar: _recordGUID
@property (readonly, nonatomic) int recordID; // ivar: _recordID
@property (readonly, nonatomic) NSInteger sequenceNumber; // ivar: _sequenceNumber


+(id)groupAddEventWithRecordID:(int)arg0 identifier:(id)arg1 ;
+(id)groupDeleteEventWithRecordID:(int)arg0 identifier:(id)arg1 externalID:(id)arg2 ;
+(id)groupUpdateEventWithRecordID:(int)arg0 identifier:(id)arg1 ;
+(id)groupWithRecordID:(int)arg0 identifier:(id)arg1 eventType:(int)arg2 externalID:(id)arg3 ;
+(id)linkEventWithRecordID:(int)arg0 identifier:(id)arg1 linkToIdentifier:(id)arg2 unifiedIdentifier:(id)arg3 ;
+(id)meCardChangedEventWithRecordID:(int)arg0 identifier:(id)arg1 ;
+(id)personAddEventWithRecordID:(int)arg0 identifier:(id)arg1 ;
+(id)personDeleteEventWithRecordID:(int)arg0 identifier:(id)arg1 externalID:(id)arg2 personLink:(int)arg3 ;
+(id)personUpdateEventWithRecordID:(int)arg0 identifier:(id)arg1 imagesChanged:(BOOL)arg2 personLink:(int)arg3 ;
+(id)personWithRecordID:(int)arg0 identifier:(id)arg1 eventType:(int)arg2 ;
+(id)personWithRecordID:(int)arg0 identifier:(id)arg1 eventType:(int)arg2 imagesChanged:(BOOL)arg3 externalID:(id)arg4 personLink:(int)arg5 ;
+(id)setPreferredImageEventWithRecordID:(int)arg0 identifier:(id)arg1 ;
+(id)setPreferredNameEventWithRecordID:(int)arg0 identifier:(id)arg1 ;
+(id)unifiedPersonAddEventWithUnifiedIdentifier:(id)arg0 ;
+(id)unifiedPersonDeleteEventWithUnifiedIdentifier:(id)arg0 ;
+(id)unifiedPersonUpdateEventWithUnifiedIdentifier:(id)arg0 ;
+(id)unifiedPersonWithIdentifier:(id)arg0 eventType:(int)arg1 ;
+(id)unlinkEventWithRecordID:(int)arg0 identifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSequenceNumber:(NSInteger)arg0 equalToOther:(NSInteger)arg1 ;
-(id)description;
-(id)descriptionForEntityType:(int)arg0 ;
-(id)descriptionForEventType:(int)arg0 ;
-(id)initWithEntityType:(int)arg0 eventType:(int)arg1 sequenceNumber:(NSInteger)arg2 recordID:(int)arg3 recordGUID:(id)arg4 externalID:(id)arg5 imagesChanged:(BOOL)arg6 personLink:(int)arg7 personLinkUUID:(id)arg8 linkToPersonUUID:(id)arg9 ;
-(void)dealloc;


@end


#endif