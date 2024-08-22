// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UPPLCHUNKPREDICTION_H
#define UPPLCHUNKPREDICTION_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface UPPLChunkPrediction : NSObject

@property (readonly, nonatomic) _NSRange charIndicesRange; // ivar: _charIndicesRange
@property (readonly, nonatomic) NSNumber *chunkScore; // ivar: _chunkScore
@property (readonly, nonatomic) NSString *coarseEntityType; // ivar: _coarseEntityType
@property (readonly, nonatomic) NSString *fineGrainedEntityType; // ivar: _fineGrainedEntityType
@property (readonly, nonatomic) _NSRange tokenIndicesIndex; // ivar: _tokenIndicesIndex


-(id)dictionaryRepresentation;
-(id)initWithCoarseEntityType:(id)arg0 fineGrainedEntityType:(id)arg1 charIndicesRange:(struct _NSRange )arg2 tokenIndicesIndex:(struct _NSRange )arg3 chunkScore:(id)arg4 ;


@end


#endif