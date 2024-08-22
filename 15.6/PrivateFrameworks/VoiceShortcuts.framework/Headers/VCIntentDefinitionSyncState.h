// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCINTENTDEFINITIONSYNCSTATE_H
#define VCINTENTDEFINITIONSYNCSTATE_H

@class MTLModel, NSDictionary, NSUUID, NSString, NSNumber;
@protocol MTLJSONSerializing;



@interface VCIntentDefinitionSyncState : MTLModel <MTLJSONSerializing>



@property (copy, nonatomic) NSDictionary *applications; // ivar: _applications
@property (copy, nonatomic) NSUUID *databaseUUID; // ivar: _databaseUUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *sequenceNumber; // ivar: _sequenceNumber
@property (readonly) Class superclass;


+(id)JSONKeyPathsByPropertyKey;


@end


#endif