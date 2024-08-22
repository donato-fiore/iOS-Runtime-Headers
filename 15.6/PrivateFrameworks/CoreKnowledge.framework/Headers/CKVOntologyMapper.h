// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVONTOLOGYMAPPER_H
#define CKVONTOLOGYMAPPER_H


#import <Foundation/Foundation.h>


@interface CKVOntologyMapper : NSObject



+(BOOL)_fieldSupportsMergeAsPersonName:(id)arg0 ;
+(id)_ontologyLabelForMergedPersonFields:(id)arg0 ;
+(id)_ontologyLabelFromFieldType:(NSInteger)arg0 fieldComponent:(unsigned char)arg1 ;
+(id)_ontologyLabelFromMergedFieldMatch:(id)arg0 itemType:(NSInteger)arg1 ;
+(id)_stringFromOntologyNodeEdgePair:(struct pair<const siri::ontology::OntologyNodeName *, const siri::ontology::OntologyEdgeName *> )arg0 ;
+(id)matchingSpanNLV3FromSpanMatch:(id)arg0 withItemInfo:(id)arg1 ;
+(id)ontologyGraphFromSpanMatch:(id)arg0 withItemInfo:(id)arg1 rankScore:(float)arg2 ;
+(id)ontologyLabelFromFieldType:(NSInteger)arg0 ;
+(id)prettyPrintUSOGraph:(id)arg0 ;
+(struct optional<std::pair<const siri::ontology::OntologyNodeName *, const siri::ontology::OntologyEdgeName *>> )_ontologyNodeEdgePairFromFieldType:(NSInteger)arg0 fieldComponent:(unsigned char)arg1 ;
+(struct optional<std::pair<const siri::ontology::OntologyNodeName *, const siri::ontology::OntologyEdgeName *>> )_ontologyNodeEdgePairFromSpanMatch:(id)arg0 ;
+(void)_setIdentifierOnEdgeNode:(id)arg0 withItemInfo:(id)arg1 spanMatch:(id)arg2 rankScore:(float)arg3 ;


@end


#endif