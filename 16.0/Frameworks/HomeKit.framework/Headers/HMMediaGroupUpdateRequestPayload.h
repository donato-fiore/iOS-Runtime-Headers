// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMMEDIAGROUPUPDATEREQUESTPAYLOAD_H
#define HMMEDIAGROUPUPDATEREQUESTPAYLOAD_H

@class HMFObject, NSString, NSArray, NSUUID;
@protocol HMMessageEncoding;



@interface HMMediaGroupUpdateRequestPayload : HMFObject <HMMessageEncoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *destinationIdentifiers; // ivar: _destinationIdentifiers
@property (readonly, copy) NSArray *destinationParentIdentfiers; // ivar: _destinationParentIdentfiers
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 destinationIdentifiers:(id)arg2 destinationParentIdentfiers:(id)arg3 ;
-(id)initWithPayload:(id)arg0 ;
-(id)payloadCopy;


@end


#endif