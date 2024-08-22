// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EAREUCLID_H
#define _EAREUCLID_H


#import <Foundation/Foundation.h>


@interface _EAREuclid : NSObject {
    unique_ptr<quasar::TextEmbedder, std::default_delete<quasar::TextEmbedder>> _embedder;
    unique_ptr<quasar::NearestNeighborSearch, std::default_delete<quasar::NearestNeighborSearch>> _nearestNeighbors;
}




+(void)initialize;
-(id)findClosestStrings:(id)arg0 ;
-(id)findClosestStrings:(id)arg0 numberOfNeighbors:(NSInteger)arg1 ;
-(id)findClosestStringsHelper:(id)arg0 vector:(struct optional<kaldi::Matrix<float>> )arg1 numberOfNeighbors:(NSInteger)arg2 ;
-(id)initWithConfiguration:(id)arg0 gModelConfigFile:(id)arg1 embeddingDims:(int)arg2 str2numFile:(id)arg3 searchMatrixFilename:(id)arg4 tableFilename:(id)arg5 ;


@end


#endif