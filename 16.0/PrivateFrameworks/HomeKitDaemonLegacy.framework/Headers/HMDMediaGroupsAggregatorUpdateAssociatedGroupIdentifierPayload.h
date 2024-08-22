// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMEDIAGROUPSAGGREGATORUPDATEASSOCIATEDGROUPIDENTIFIERPAYLOAD_H
#define HMDMEDIAGROUPSAGGREGATORUPDATEASSOCIATEDGROUPIDENTIFIERPAYLOAD_H

@class HMFObject, NSUUID, NSString;
@protocol HMMessageEncoding;



@interface HMDMediaGroupsAggregatorUpdateAssociatedGroupIdentifierPayload : HMFObject <HMMessageEncoding>



@property (readonly, copy) NSUUID *associatedGroupIdentifier; // ivar: _associatedGroupIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSUUID *groupIdentifier; // ivar: _groupIdentifier
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)messageName;
-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithGroupIdentifier:(id)arg0 associatedGroupIdentifier:(id)arg1 ;
-(id)initWithPayload:(id)arg0 ;
-(id)payloadCopy;


@end


#endif