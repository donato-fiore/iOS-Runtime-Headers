// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISSYMBOLICON_H
#define ISSYMBOLICON_H

@class NSString;


#import "ISIcon.h"
#import "ISGraphicIconConfiguration.h"
#import "ISGraphicSymbolDescriptor.h"
#import "ISImageCache.h"

@interface ISSymbolIcon : ISIcon

@property (readonly, copy, nonatomic) ISGraphicIconConfiguration *config; // ivar: _config
@property (readonly) ISGraphicSymbolDescriptor *graphicSymbolDescriptor; // ivar: _graphicSymbolDescriptor
@property (readonly) ISImageCache *imageCache; // ivar: _imageCache
@property (readonly) NSString *symbolName; // ivar: _symbolName


-(id)_generateImageWithDescriptor:(id)arg0 ;
-(id)_specUpdatedDescriptorForDescriptor:(id)arg0 ;
-(id)description;
-(id)imageForImageDescriptor:(id)arg0 ;
-(id)initWithSymbolName:(id)arg0 ;
-(id)initWithSymbolName:(id)arg0 configuration:(id)arg1 ;
-(id)symbol;
-(void)_prepareImagesForImageDescriptors:(id)arg0 ;
-(void)getImageForImageDescriptor:(id)arg0 completion:(id)arg1 ;


@end


#endif