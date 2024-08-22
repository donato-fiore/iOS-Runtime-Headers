// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXLAYOUTBLUEPRINTFACTORY_H
#define SXLAYOUTBLUEPRINTFACTORY_H

@class NSString;
@protocol SXLayoutBlueprintFactory, SXComponentBlueprintFactory, SXUnitConverterFactory;

#import <Foundation/Foundation.h>


@interface SXLayoutBlueprintFactory : NSObject <SXLayoutBlueprintFactory>



@property (readonly, nonatomic) NSObject<SXComponentBlueprintFactory> *componentBlueprintFactory; // ivar: _componentBlueprintFactory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<SXUnitConverterFactory> *unitConverterFactory; // ivar: _unitConverterFactory


-(id)createLayoutBlueprintWithLayoutOptions:(id)arg0 ;
-(id)initWithComponentBlueprintFactory:(id)arg0 unitConverterFactory:(id)arg1 ;


@end


#endif