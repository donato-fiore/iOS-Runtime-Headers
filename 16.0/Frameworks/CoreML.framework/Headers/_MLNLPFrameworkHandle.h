// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MLNLPFRAMEWORKHANDLE_H
#define _MLNLPFRAMEWORKHANDLE_H


#import <Foundation/Foundation.h>


@interface _MLNLPFrameworkHandle : NSObject

@property (readonly, nonatomic) *unk NLPClassifierModelCopyPredictedLabelForTextImpl; // ivar: _NLPClassifierModelCopyPredictedLabelForTextImpl
@property (readonly, nonatomic) *unk NLPClassifierModelCreateWithDataImpl; // ivar: _NLPClassifierModelCreateWithDataImpl
@property (readonly, nonatomic) *unk NLPClassifierModelGetCurrentRevisionImpl; // ivar: _NLPClassifierModelGetCurrentRevisionImpl
@property (readonly, nonatomic) *unk NLPClassifierModelGetRevisionImpl; // ivar: _NLPClassifierModelGetRevisionImpl
@property (readonly, nonatomic) *unk NLPClassifierModelIsRevisionSupportedImpl; // ivar: _NLPClassifierModelIsRevisionSupportedImpl
@property (readonly, nonatomic) *unk NLPEmbeddingModelCopyVectorForStringImpl; // ivar: _NLPEmbeddingModelCopyVectorForStringImpl
@property (readonly, nonatomic) *unk NLPEmbeddingModelCreateWithDataImpl; // ivar: _NLPEmbeddingModelCreateWithDataImpl
@property (readonly, nonatomic) *unk NLPEmbeddingModelGetCurrentRevisionImpl; // ivar: _NLPEmbeddingModelGetCurrentRevisionImpl
@property (readonly, nonatomic) *unk NLPEmbeddingModelGetRevisionImpl; // ivar: _NLPEmbeddingModelGetRevisionImpl
@property (readonly, nonatomic) *unk NLPEmbeddingModelIsRevisionSupportedImpl; // ivar: _NLPEmbeddingModelIsRevisionSupportedImpl
@property (readonly, nonatomic) *unk NLPGazetteerModelCopyLabelForStringImpl; // ivar: _NLPGazetteerModelCopyLabelForStringImpl
@property (readonly, nonatomic) *unk NLPGazetteerModelCreateWithDataImpl; // ivar: _NLPGazetteerModelCreateWithDataImpl
@property (readonly, nonatomic) *unk NLPGazetteerModelGetCurrentRevisionImpl; // ivar: _NLPGazetteerModelGetCurrentRevisionImpl
@property (readonly, nonatomic) *unk NLPGazetteerModelGetRevisionImpl; // ivar: _NLPGazetteerModelGetRevisionImpl
@property (readonly, nonatomic) *unk NLPGazetteerModelIsRevisionSupportedImpl; // ivar: _NLPGazetteerModelIsRevisionSupportedImpl
@property (readonly, nonatomic) *unk NLPSequenceModelCopyPredictedTokensAndLabelsForTextImpl; // ivar: _NLPSequenceModelCopyPredictedTokensAndLabelsForTextImpl
@property (readonly, nonatomic) *unk NLPSequenceModelCreateWithDataImpl; // ivar: _NLPSequenceModelCreateWithDataImpl
@property (readonly, nonatomic) *unk NLPSequenceModelGetCurrentRevisionImpl; // ivar: _NLPSequenceModelGetCurrentRevisionImpl
@property (readonly, nonatomic) *unk NLPSequenceModelGetRevisionImpl; // ivar: _NLPSequenceModelGetRevisionImpl
@property (readonly, nonatomic) *unk NLPSequenceModelIsRevisionSupportedImpl; // ivar: _NLPSequenceModelIsRevisionSupportedImpl
@property (readonly, nonatomic, getter=isValid) BOOL valid; // ivar: _valid


+(id)sharedHandle;
-(*void)initializeEmbeddingModelWithData:(id)arg0 error:(*id)arg1 ;
-(*void)initializeGazetteerModelWithData:(id)arg0 error:(*id)arg1 ;
-(*void)initializeSentenceClassifierModelWithData:(id)arg0 error:(*id)arg1 ;
-(*void)initializeWordTaggingModelWithData:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)predictLabelForWordString:(*void)arg0 inputString:(id)arg1 error:(*id)arg2 ;
-(id)predictLabelsForSentenceString:(*void)arg0 inputString:(id)arg1 error:(*id)arg2 ;
-(id)predictTokensLabelsLocationsLengthsForString:(*void)arg0 inputString:(id)arg1 error:(*id)arg2 ;
-(id)predictVectorForString:(*void)arg0 inputString:(id)arg1 error:(*id)arg2 ;


@end


#endif