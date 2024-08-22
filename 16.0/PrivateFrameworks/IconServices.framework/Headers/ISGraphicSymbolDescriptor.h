// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISGRAPHICSYMBOLDESCRIPTOR_H
#define ISGRAPHICSYMBOLDESCRIPTOR_H

@class IFGraphicSymbolDescriptor, NSURL;


#import "ISResourceProvider.h"

@interface ISGraphicSymbolDescriptor : IFGraphicSymbolDescriptor

@property (retain) ISResourceProvider *_resourceProvider; // ivar: __resourceProvider
@property (retain) NSURL *_url; // ivar: __url
@property (readonly) BOOL placeholder;


+(id)descriptorFromGraphicSymbolRecipe:(id)arg0 ;
-(id)description;


@end


#endif