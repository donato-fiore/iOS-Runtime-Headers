// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SALOCALSEARCHOFFERLIST_H
#define SALOCALSEARCHOFFERLIST_H

@class NSString, NSArray;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SALocalSearchOfferList : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *offers;
@property (copy, nonatomic) NSString *providerId;
@property (readonly) Class superclass;


+(id)offerList;
+(id)offerListWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif