// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKBASEUSERDOMAINCONCEPTSEMANTICIDENTIFIER_H
#define HKBASEUSERDOMAINCONCEPTSEMANTICIDENTIFIER_H

@class NSUUID;


#import "HKUserDomainConceptSemanticIdentifier.h"

@interface HKBaseUserDomainConceptSemanticIdentifier : HKUserDomainConceptSemanticIdentifier

@property (readonly, copy, nonatomic) NSUUID *UUID; // ivar: _UUID


+(id)semanticIdentifierWithComponents:(id)arg0 ;
-(id)init;
-(id)initWithTypeIdentifier:(id)arg0 ;
-(id)initWithUUID:(id)arg0 ;
-(id)stringValue;


@end


#endif