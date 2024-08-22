// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGQUICKRESPONSESCLASSIFICATIONMODEL_H
#define SGQUICKRESPONSESCLASSIFICATIONMODEL_H



#import "SGQuickResponsesModel.h"

@interface SGQuickResponsesClassificationModel : SGQuickResponsesModel



+(id)featurizerWithMethods:(id)arg0 bucketSize:(NSUInteger)arg1 characterNGramRange:(struct _NSRange )arg2 tokenNGramRange:(struct _NSRange )arg3 idVectorLength:(NSUInteger)arg4 extraIdOptions:(NSUInteger)arg5 vectorizerStrategy:(NSUInteger)arg6 vectorNormalization:(NSInteger)arg7 ;
+(id)newTransformerInstanceForConfig:(id)arg0 seed:(NSUInteger)arg1 useSeed:(BOOL)arg2 ;
+(id)newTransformerInstanceForLanguage:(id)arg0 mode:(NSUInteger)arg1 plistPath:(id)arg2 ;
+(id)newTransformerInstanceForLanguage:(id)arg0 withDictionary:(id)arg1 withSeed:(NSUInteger)arg2 forMode:(NSUInteger)arg3 ;


@end


#endif