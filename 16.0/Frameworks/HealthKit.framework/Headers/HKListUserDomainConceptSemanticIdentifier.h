// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKLISTUSERDOMAINCONCEPTSEMANTICIDENTIFIER_H
#define HKLISTUSERDOMAINCONCEPTSEMANTICIDENTIFIER_H



#import "HKUserDomainConceptSemanticIdentifier.h"

@interface HKListUserDomainConceptSemanticIdentifier : HKUserDomainConceptSemanticIdentifier

@property (readonly, nonatomic) NSUInteger listType; // ivar: _listType


+(id)semanticIdentifierWithComponents:(id)arg0 ;
-(id)init;
-(id)initWithListType:(NSUInteger)arg0 ;
-(id)initWithTypeIdentifier:(id)arg0 ;
-(id)stringValue;


@end


#endif