// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMHOMEKITCLIENTACTIONSETEVENT_H
#define BMHOMEKITCLIENTACTIONSETEVENT_H

@class NSString, NSArray;
@protocol BMStoreData, BMProtoBufWrapper;


#import "BMEventBase.h"
#import "BMHomeKitClientBase.h"

@interface BMHomeKitClientActionSetEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>



@property (readonly, copy, nonatomic) NSString *actionSetName; // ivar: _actionSetName
@property (readonly, copy, nonatomic) NSString *actionSetType; // ivar: _actionSetType
@property (readonly, copy, nonatomic) NSString *actionSetUniqueIdentifier; // ivar: _actionSetUniqueIdentifier
@property (readonly, copy, nonatomic) NSArray *associatedAccessoryUniqueIdentifiers; // ivar: _associatedAccessoryUniqueIdentifiers
@property (readonly, copy, nonatomic) BMHomeKitClientBase *base; // ivar: _base
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *homeName; // ivar: _homeName
@property (readonly) Class superclass;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)initWithBase:(id)arg0 actionSetUniqueIdentifier:(id)arg1 actionSetType:(id)arg2 associatedAccessoryUniqueIdentifiers:(id)arg3 actionSetName:(id)arg4 homeName:(id)arg5 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)proto;
-(id)serialize;


@end


#endif