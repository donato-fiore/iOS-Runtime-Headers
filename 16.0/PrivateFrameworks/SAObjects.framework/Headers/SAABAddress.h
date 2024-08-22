// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAABADDRESS_H
#define SAABADDRESS_H



#import "SALocation.h"

@interface SAABAddress : SALocation



+(id)address;
+(id)addressWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif