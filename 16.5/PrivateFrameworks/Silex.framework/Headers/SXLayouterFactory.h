// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXLAYOUTERFACTORY_H
#define SXLAYOUTERFACTORY_H

@class NSString;
@protocol SXLayouterFactory, SXColumnCalculator, SXLayoutContextFactory, SXUnitConverterFactory;

#import <Foundation/Foundation.h>


@interface SXLayouterFactory : NSObject <SXLayouterFactory>



@property (readonly, nonatomic) NSObject<SXColumnCalculator> *columnCalculator; // ivar: _columnCalculator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SXLayoutContextFactory> *layoutContextFactory; // ivar: _layoutContextFactory
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<SXUnitConverterFactory> *unitConverterFactory; // ivar: _unitConverterFactory


-(id)createColumnLayouterWithDelegate:(id)arg0 ;
-(id)initWithColumnCalculator:(id)arg0 layoutContextFactory:(id)arg1 unitConverterFactory:(id)arg2 ;
-(id)layouterForContainerComponentBlueprint:(id)arg0 delegate:(id)arg1 ;


@end


#endif