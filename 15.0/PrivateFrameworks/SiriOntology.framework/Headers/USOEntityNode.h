// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef USOENTITYNODE_H
#define USOENTITYNODE_H



#import "USOGraphNode.h"

@interface USOEntityNode : USOGraphNode {
    *void _usoEntityNode;
}




-(id)initWithCppEntityNode:(*void)arg0 ;
-(void)addIdentifierWithValue:(id)arg0 appBundleId:(id)arg1 namespaceString:(id)arg2 ;
-(void)addIdentifierWithValue:(id)arg0 appBundleId:(id)arg1 namespaceString:(id)arg2 probability:(struct optional<double> )arg3 nluComponent:(struct optional<siri::ontology::UsoIdentifier::NluComponent> )arg4 ;
-(void)addUtteranceAlignmentWithAsrIndex:(unsigned int)arg0 StartIndex:(unsigned int)arg1 endIndex:(unsigned int)arg2 startUnicodeScalarIndex:(unsigned int)arg3 endUnicodeScalarIndex:(unsigned int)arg4 ;


@end


#endif