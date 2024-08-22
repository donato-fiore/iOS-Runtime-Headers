// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SALOCALSEARCHOFFER_H
#define SALOCALSEARCHOFFER_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"
#import "SAUIAppPunchOut.h"

@interface SALocalSearchOffer : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) SAUIAppPunchOut *offerPunchOut;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;


+(id)offer;
+(id)offerWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif