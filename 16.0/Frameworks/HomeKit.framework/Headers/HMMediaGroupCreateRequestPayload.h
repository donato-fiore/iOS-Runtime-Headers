// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMMEDIAGROUPCREATEREQUESTPAYLOAD_H
#define HMMEDIAGROUPCREATEREQUESTPAYLOAD_H

@class HMFObject, NSString, NSArray;
@protocol HMMessageEncoding;



@interface HMMediaGroupCreateRequestPayload : HMFObject <HMMessageEncoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *destinationIdentifiers; // ivar: _destinationIdentifiers
@property (readonly, copy) NSArray *destinationParentIdentfiers; // ivar: _destinationParentIdentfiers
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)attributeDescriptions;
-(id)initWithName:(id)arg0 destinationIdentifiers:(id)arg1 destinationParentIdentfiers:(id)arg2 ;
-(id)initWithPayload:(id)arg0 ;
-(id)payloadCopy;


@end


#endif