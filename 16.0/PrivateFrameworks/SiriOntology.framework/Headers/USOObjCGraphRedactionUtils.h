// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef USOOBJCGRAPHREDACTIONUTILS_H
#define USOOBJCGRAPHREDACTIONUTILS_H


#import <Foundation/Foundation.h>


@interface USOObjCGraphRedactionUtils : NSObject



+(?)isContactRelatedEntityNode;
+(?)redactedGraphHelperWithRedactedGraph:(?)arg0 redactedList:(?)arg1 visitedNodes:(?)arg2 fromNode:(?)arg3 successorsvocabManager;
+(BOOL)isAllowedCatiIdentifier:(*void)arg0 ;
+(BOOL)isContactIDNamespace:(*void)arg0 ;
+(BOOL)isHomeKitEntityTypeIdentifier:(*void)arg0 ;
+(BOOL)shouldRetainIdentifierValue:(*void)arg0 isContactRelatedEntityNode:(BOOL)arg1 ;
+(id)allowedHomeKitEntityTypes;
+(id)catiNamespacesForIdentifierValues;
+(id)commonAppBundleIds;
+(id)contactEntities;
+(id)firstPartyAppBundleIds;
+(id)getRedactedGraph:(*void)arg0 ;
+(id)obfuscateAppBundleId:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> )arg0 ;
+(struct unique_ptr<siri::ontology::UsoIdentifier, std::default_delete<siri::ontology::UsoIdentifier>> )getRedactedIdentifier:(struct UsoIdentifier )arg0 isContactRelatedEntityNode:(BOOL)arg1 ;
+(struct unique_ptr<siri::ontology::UsoIdentifier, std::default_delete<siri::ontology::UsoIdentifier>> )getRedactionIdentifier;


@end


#endif