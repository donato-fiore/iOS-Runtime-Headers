// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXLAYOUTOPERATIONFACTORY_H
#define SXLAYOUTOPERATIONFACTORY_H

@class NSString;
@protocol SXLayoutOperationFactory, SXComponentSizerEngine, SXLayoutBlueprintFactory, SXLayoutContextFactory, SXLayouterFactory, SXUnitConverterFactory;

#import <Foundation/Foundation.h>


@interface SXLayoutOperationFactory : NSObject <SXLayoutOperationFactory>



@property (readonly, nonatomic) NSObject<SXComponentSizerEngine> *componentSizerEngine; // ivar: _componentSizerEngine
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXLayoutBlueprintFactory> *layoutBlueprintFactory; // ivar: _layoutBlueprintFactory
@property (readonly, nonatomic) NSObject<SXLayoutContextFactory> *layoutContextFactory; // ivar: _layoutContextFactory
@property (readonly, nonatomic) NSObject<SXLayouterFactory> *layouterFactory; // ivar: _layouterFactory
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<SXUnitConverterFactory> *unitConverterFactory; // ivar: _unitConverterFactory


-(id)initWithComponentSizerEngine:(id)arg0 layoutBlueprintFactory:(id)arg1 layouterFactory:(id)arg2 layoutContextFactory:(id)arg3 unitConverterFactory:(id)arg4 ;
-(id)layoutOperationWithTask:(id)arg0 DOMObjectProvider:(id)arg1 ;


@end


#endif