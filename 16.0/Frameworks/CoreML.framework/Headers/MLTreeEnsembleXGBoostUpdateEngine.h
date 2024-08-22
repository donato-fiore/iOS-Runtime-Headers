// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLTREEENSEMBLEXGBOOSTUPDATEENGINE_H
#define MLTREEENSEMBLEXGBOOSTUPDATEENGINE_H

@class NSString;
@protocol MLUpdatable, OS_dispatch_queue;


#import "MLTreeEnsembleXGBoostClassifier.h"
#import "MLParameterContainer.h"
#import "MLUpdateProgressHandlers.h"

@interface MLTreeEnsembleXGBoostUpdateEngine : MLTreeEnsembleXGBoostClassifier <MLUpdatable>

 {
    vector<std::string, std::allocator<std::string>> _classesByString;
    vector<long long, std::allocator<long long>> _classesByInt;
    vector<unsigned char, std::allocator<unsigned char>> _cachedModel;
}


@property ? cachedModel;
@property ? classesByInt;
@property ? classesByString;
@property (nonatomic) BOOL continueWithUpdate; // ivar: _continueWithUpdate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) shared_ptr<Archiver::MMappedFile> mmappedModel; // ivar: _mmappedModel
@property (nonatomic) NSUInteger numDimensions; // ivar: _numDimensions
@property (retain, nonatomic) MLParameterContainer *parameterContainer; // ivar: _parameterContainer
@property (nonatomic) BOOL personalization; // ivar: _personalization
@property (retain, nonatomic) MLUpdateProgressHandlers *progressHandlers; // ivar: _progressHandlers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *progressHandlersDispatchQueue; // ivar: _progressHandlersDispatchQueue
@property (readonly) Class superclass;


+(id)loadModelFromCompiledArchive:(*void)arg0 modelVersionInfo:(id)arg1 compilerVersionInfo:(id)arg2 configuration:(id)arg3 error:(*id)arg4 ;
-(BOOL)writeToURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithCompiledArchive:(*void)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)loadParameterDescriptionsAndContainerFromConfiguration:(id)arg0 modelDescription:(id)arg1 error:(*id)arg2 ;
-(id)parameterValueForKey:(id)arg0 ;
-(id)parameterValueForKey:(id)arg0 error:(*id)arg1 ;
-(void)resumeUpdateWithParameters:(id)arg0 ;
-(void)updateModelWithData:(id)arg0 ;


@end


#endif