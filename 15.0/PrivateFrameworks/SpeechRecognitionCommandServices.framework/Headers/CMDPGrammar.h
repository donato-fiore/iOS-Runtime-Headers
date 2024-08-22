// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMDPGRAMMAR_H
#define CMDPGRAMMAR_H

@class NSString, NSMutableArray;

#import <Foundation/Foundation.h>


@interface CMDPGrammar : NSObject {
    int _nextFstState;
    int _nextLabelIndex;
    BOOL _addOptionalFst;
    unique_ptr<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>>, std::default_delete<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>> _grammarFst;
    BOOL _rebuildGrammar;
    vector<std::pair<std::string, std::unique_ptr<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>, std::allocator<std::pair<std::string, std::unique_ptr<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>>>> _labelFstPairVector;
    unique_ptr<CMDPNormalizer, std::default_delete<CMDPNormalizer>> _normalizer;
    NSString *_currentBuiltInLMString;
    NSString *_currentCommandIdentifier;
    NSMutableArray *_grammarDataArray;
    set<std::string, std::less<std::string>, std::allocator<std::string>> _symbol_set;
    set<std::string, std::less<std::string>, std::allocator<std::string>> _special_symbol_set;
}




-(*void)grammarFst;
-(id)grammarData;
-(id)initWithCommandTreeDictionary:(id)arg0 forLocaleIdentifier:(id)arg1 ;
-(void)addAdlibFstWithLabel:(*void)arg0 outputIndex:(int)arg1 ;
-(void)addOptionalFstWithLabel;
-(void)addPhrase:(id)arg0 toFst:(*void)arg1 withArc:(struct _FstArc )arg2 ;
-(void)buildGrammarFst:(*void)arg0 forCommandTree:(id)arg1 withFstArcDictionary:(id)arg2 ;


@end


#endif