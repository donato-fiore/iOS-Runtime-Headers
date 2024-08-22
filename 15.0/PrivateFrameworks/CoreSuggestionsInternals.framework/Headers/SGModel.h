// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGMODEL_H
#define SGMODEL_H

@class NSString, SGModelSource;
@protocol PMLTransformerProtocol, PMLMultiLabelClassifierProtocol;

#import <Foundation/Foundation.h>


@interface SGModel : NSObject

@property (readonly) NSObject<PMLTransformerProtocol> *featurizer; // ivar: _featurizer
@property (readonly, copy) NSString *locale; // ivar: _locale
@property (readonly) NSObject<PMLMultiLabelClassifierProtocol> *model; // ivar: _model
@property (readonly) SGModelSource *modelSource; // ivar: _modelSource


+(Class)modelClassForObjective:(NSUInteger)arg0 ;
+(id)featurize:(id)arg0 ;
+(id)newTransformerInstanceForLanguage:(id)arg0 ;
+(id)trainingFeaturesOf:(id)arg0 inLanguage:(id)arg1 ;
+(id)trainingFeaturesOf:(id)arg0 inLanguage:(id)arg1 withObjective:(NSUInteger)arg2 ;
+(id)transformerInstanceForLanguage:(id)arg0 ;
+(id)transformerInstanceForLanguage:(id)arg0 withObjective:(NSUInteger)arg1 ;
-(id)initWithModel:(id)arg0 locale:(id)arg1 featurizer:(id)arg2 modelSource:(id)arg3 ;
-(id)predictForInput:(id)arg0 ;
-(id)trainingFeaturesOf:(id)arg0 ;


@end


#endif