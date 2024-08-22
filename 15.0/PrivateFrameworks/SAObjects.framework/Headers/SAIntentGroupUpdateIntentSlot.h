// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAINTENTGROUPUPDATEINTENTSLOT_H
#define SAINTENTGROUPUPDATEINTENTSLOT_H

@class NSString, NSNumber;
@protocol SAServerBoundCommand, SAIntentGroupSetMapLocation;


#import "SABaseCommand.h"
#import "SAIntentGroupProtobufMessage.h"

@interface SAIntentGroupUpdateIntentSlot : SABaseCommand <SAServerBoundCommand, SAIntentGroupSetMapLocation>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *intentSlotKeyPath;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *intentSlotResolutionResult;
@property (copy, nonatomic) NSNumber *intentSlotValueIndex;
@property (copy, nonatomic) NSString *intentTypeName;
@property (copy, nonatomic) NSString *jsonEncodedIntentSlotResolutionResult;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *location;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


+(id)updateIntentSlot;
+(id)updateIntentSlotWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif