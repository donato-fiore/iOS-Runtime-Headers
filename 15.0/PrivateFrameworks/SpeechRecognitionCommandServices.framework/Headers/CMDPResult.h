// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMDPRESULT_H
#define CMDPRESULT_H


#import <Foundation/Foundation.h>


@interface CMDPResult : NSObject {
    unique_ptr<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>>, std::default_delete<fst::VectorFst<fst::ArcTpl<fst::TropicalWeightTpl<float>>>>> _resultFst;
    unique_ptr<CMDPNormalizer, std::default_delete<CMDPNormalizer>> _normalizer;
    vector<std::unique_ptr<CMDPToken>, std::allocator<std::unique_ptr<CMDPToken>>> _resultNodes;
    set<std::string, std::less<std::string>, std::allocator<std::string>> _symbol_set;
}




+(struct vector<std::vector<std::vector<std::unique_ptr<CMDPToken>>>, std::allocator<std::vector<std::vector<std::unique_ptr<CMDPToken>>>>> )CMDPTokenSausageFromAFSpeechPhraseArray:(id)arg0 ;
+(struct vector<std::vector<std::vector<std::unique_ptr<CMDPToken>>>, std::allocator<std::vector<std::vector<std::unique_ptr<CMDPToken>>>>> )CMDPTokenSausageFromCFTokenSausage:(struct __CFArray *)arg0 ;
-(id)createArrayFromNBestResults:(*void)arg0 withGrammarData:(id)arg1 ;
-(id)initWithAFSpeechPhraseArray:(id)arg0 forLocaleIdentifier:(id)arg1 ;
-(id)initWithTokenSausage:(struct __CFArray *)arg0 forLocaleIdentifier:(id)arg1 ;
-(id)initWithTokenSausageVec:(*void)arg0 forLocaleIdentifier:(id)arg1 ;
-(id)matchWithGrammars:(id)arg0 winningIndex:(*int)arg1 winningDistance:(*float)arg2 ;


@end


#endif