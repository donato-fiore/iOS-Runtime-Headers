// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CVNLPTOKENIDCONVERTER_H
#define CVNLPTOKENIDCONVERTER_H


#import <Foundation/Foundation.h>


@interface CVNLPTokenIDConverter : NSObject {
    unique_ptr<cvnlp::AbstractVocabulary, std::default_delete<cvnlp::AbstractVocabulary>> _vocabTokenizer;
}


@property (readonly) unsigned int bosTokenID; // ivar: _bosTokenID
@property (readonly) unsigned int eosTokenID; // ivar: _eosTokenID
@property (readonly) unsigned int unkTokenID; // ivar: _unkTokenID


-(id)initWithResource:(id)arg0 andTokenType:(int)arg1 ;
-(void)enumerateTokenIDsForText:(id)arg0 withBlock:(id)arg1 ;


@end


#endif