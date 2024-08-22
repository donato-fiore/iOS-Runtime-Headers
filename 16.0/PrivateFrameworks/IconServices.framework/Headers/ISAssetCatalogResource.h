// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISASSETCATALOGRESOURCE_H
#define ISASSETCATALOGRESOURCE_H

@class CUICatalog, NSString, IFImageBag;
@protocol ISScalableCompositorResource;

#import <Foundation/Foundation.h>


@interface ISAssetCatalogResource : NSObject <ISScalableCompositorResource>



@property (readonly) CUICatalog *catalog; // ivar: _catalog
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) IFImageBag *imageBag; // ivar: _imageBag
@property (readonly) NSString *imageName; // ivar: _imageName
@property NSInteger layoutDirection; // ivar: _layoutDirection
@property (readonly, getter=isPrecomposed) BOOL precomposed;
@property (readonly) Class superclass;
@property (readonly) NSString *symbolName; // ivar: _symbolName


+(id)coreGlyphsCatalog;
+(id)imageForStaticAssetWithKey:(id)arg0 withDescriptor:(id)arg1 ;
-(id)imageForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(id)imageWithName:(id)arg0 scale:(CGFloat)arg1 ;
-(id)initWithCatalog:(id)arg0 imageName:(id)arg1 symbolName:(id)arg2 ;
-(id)symbolImageForFontSize:(CGFloat)arg0 scale:(CGFloat)arg1 symbolSize:(NSUInteger)arg2 symbolWeight:(NSInteger)arg3 ;
-(id)symbolImageForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;


@end


#endif