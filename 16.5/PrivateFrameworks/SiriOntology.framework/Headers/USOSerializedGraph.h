// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef USOSERIALIZEDGRAPH_H
#define USOSERIALIZEDGRAPH_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface USOSerializedGraph : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *alignments; // ivar: _alignments
@property (retain, nonatomic) NSArray *edges; // ivar: _edges
@property (retain, nonatomic) NSArray *identifiers; // ivar: _identifiers
@property (retain, nonatomic) NSArray *nodes; // ivar: _nodes
@property (retain, nonatomic) NSString *printedForm; // ivar: _printedForm


+(BOOL)supportsSecureCoding;
-(*void)getOrCreateEdgeName:(id)arg0 withVocabManager:(struct shared_ptr<siri::ontology::UsoVocabManager> )arg1 withError:(*id)arg2 ;
-(*void)getOrCreateNodeName:(id)arg0 withVocabManager:(struct shared_ptr<siri::ontology::UsoVocabManager> )arg1 withError:(*id)arg2 ;
-(*void)getOrCreateVerbName:(id)arg0 withVocabManager:(struct shared_ptr<siri::ontology::UsoVocabManager> )arg1 withError:(*id)arg2 ;
-(?)createSerializedNodewithError;
-(?)getIdentifiersIfExistsnodeIndex;
-(?)getUtteranceAlignmentsIfExistsnodeIndex;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNodes:(id)arg0 edges:(id)arg1 ;
-(id)initWithNodes:(id)arg0 edges:(id)arg1 identifiers:(id)arg2 alignments:(id)arg3 ;
-(id)initWithUsoGraph:(*void)arg0 withError:(*id)arg1 ;
-(struct unique_ptr<siri::ontology::UsoGraph, std::default_delete<siri::ontology::UsoGraph>> )toCppUsoGraph:(struct shared_ptr<siri::ontology::UsoVocabManager> )arg0 withError:(*id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif