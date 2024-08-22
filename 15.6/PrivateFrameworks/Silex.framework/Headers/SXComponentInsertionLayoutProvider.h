// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXCOMPONENTINSERTIONLAYOUTPROVIDER_H
#define SXCOMPONENTINSERTIONLAYOUTPROVIDER_H

@class NSString;
@protocol SXComponentInsertionLayoutProvider, SXDOMObjectProviding, SXUnitConverterFactory;

#import <Foundation/Foundation.h>

#import "SXColumnLayout.h"
#import "SXLayoutBlueprint.h"

@interface SXComponentInsertionLayoutProvider : NSObject <SXComponentInsertionLayoutProvider>



@property (readonly, nonatomic) NSObject<SXDOMObjectProviding> *DOMObjectProvider; // ivar: _DOMObjectProvider
@property (readonly, nonatomic) SXColumnLayout *columnLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGSize documentSize;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SXLayoutBlueprint *layoutBlueprint; // ivar: _layoutBlueprint
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<SXUnitConverterFactory> *unitConverterFactory; // ivar: _unitConverterFactory
@property (readonly, nonatomic) CGSize viewportSize;


-(id)initWithBlueprint:(id)arg0 DOMObjectProvider:(id)arg1 unitConverterFactory:(id)arg2 ;
-(id)layoutBlueprintForMarker:(id)arg0 ;
-(id)suggestedMarginForMarker:(id)arg0 ;
-(id)unitConverterForMarker:(id)arg0 ;
-(struct CGRect )frameForComponent:(id)arg0 ;


@end


#endif