// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXHORIZONTALSTACKLAYOUTER_H
#define SXHORIZONTALSTACKLAYOUTER_H

@class NSString;
@protocol SXLayouter, SXColumnCalculator, SXLayoutContextFactory, SXUnitConverterFactory, SXLayouterDelegate;

#import <Foundation/Foundation.h>

#import "SXContainerComponentBlueprint.h"
#import "SXLayouterFactory.h"

@interface SXHorizontalStackLayouter : NSObject <SXLayouter>

 {
    SXContainerComponentBlueprint *_containerComponentBlueprint;
    SXLayouterFactory *_layouterFactory;
    id<SXColumnCalculator> *_columnCalculator;
    id<SXLayoutContextFactory> *_layoutContextFactory;
    id<SXUnitConverterFactory> *_unitConverterFactory;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SXLayouterDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)layoutBlueprint:(id)arg0 columnLayout:(id)arg1 description:(id)arg2 shouldContinue:(*BOOL)arg3 ;


@end


#endif