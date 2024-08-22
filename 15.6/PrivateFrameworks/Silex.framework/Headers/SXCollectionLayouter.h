// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXCOLLECTIONLAYOUTER_H
#define SXCOLLECTIONLAYOUTER_H

@class NSString;
@protocol SXLayouter, SXColumnCalculator, SXLayouterDelegate, SXUnitConverterFactory;

#import <Foundation/Foundation.h>

#import "SXContainerComponentBlueprint.h"
#import "SXLayouterFactory.h"

@interface SXCollectionLayouter : NSObject <SXLayouter>



@property (readonly, nonatomic) NSObject<SXColumnCalculator> *columnCalculator; // ivar: _columnCalculator
@property (readonly, nonatomic) SXContainerComponentBlueprint *containerComponentBlueprint; // ivar: _containerComponentBlueprint
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SXLayouterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SXLayouterFactory *layouterFactory; // ivar: _layouterFactory
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<SXUnitConverterFactory> *unitConverterFactory; // ivar: _unitConverterFactory


-(id)childColumnLayoutForRowLayout:(id)arg0 display:(id)arg1 collectionContainerBlueprint:(id)arg2 childContainerComponentBlueprint:(id)arg3 documentColumnLayout:(id)arg4 unitConverter:(id)arg5 ;
-(id)initWithContainerComponent:(id)arg0 layouterFactory:(id)arg1 columnCalculator:(id)arg2 unitConverterFactory:(id)arg3 ;
-(void)layoutBlueprint:(id)arg0 columnLayout:(id)arg1 description:(id)arg2 shouldContinue:(*BOOL)arg3 ;


@end


#endif