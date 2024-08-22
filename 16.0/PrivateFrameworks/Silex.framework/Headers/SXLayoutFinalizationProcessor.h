// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXLAYOUTFINALIZATIONPROCESSOR_H
#define SXLAYOUTFINALIZATIONPROCESSOR_H

@class NSString;
@protocol SXLayoutProcessor, SXUnitConverterFactory;

#import <Foundation/Foundation.h>


@interface SXLayoutFinalizationProcessor : NSObject <SXLayoutProcessor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<SXUnitConverterFactory> *unitConverterFactory; // ivar: _unitConverterFactory


-(id)initWithUnitConverterFactory:(id)arg0 ;
-(void)finalizeLayoutBlueprint:(id)arg0 origin:(struct CGPoint )arg1 absoluteOrigin:(struct CGPoint )arg2 ;
-(void)processLayoutTask:(id)arg0 layoutBlueprint:(id)arg1 DOMObjectProvider:(id)arg2 ;


@end


#endif