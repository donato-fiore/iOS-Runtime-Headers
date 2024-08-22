// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXWIDGETCOMPOSITIONSPEC_H
#define PXWIDGETCOMPOSITIONSPEC_H


#import <Foundation/Foundation.h>

#import "PXWidgetBarSpec.h"
#import "PXWidgetSpec.h"

@interface PXWidgetCompositionSpec : NSObject

@property (readonly, nonatomic) PXWidgetBarSpec *_defaultHeaderSpec; // ivar: __defaultHeaderSpec
@property (readonly, nonatomic) PXWidgetBarSpec *_headerSpecForFlushedContent; // ivar: __headerSpecForFlushedContent
@property (readonly, nonatomic) NSInteger disclosureLocation; // ivar: _disclosureLocation
@property (readonly, nonatomic) PXWidgetBarSpec *footerSpec; // ivar: _footerSpec
@property (readonly, nonatomic) NSInteger maximumNumberOfColumns; // ivar: _maximumNumberOfColumns
@property (readonly, nonatomic) PXWidgetSpec *widgetSpec; // ivar: _widgetSpec


-(id)headerSpecForWidgetContentLayoutStyle:(NSInteger)arg0 ;
-(id)init;
-(id)initWithExtendedTraitCollection:(id)arg0 widgetSpec:(id)arg1 ;


@end


#endif