// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUCIIMAGESOURCEDEFINITION_H
#define NUCIIMAGESOURCEDEFINITION_H

@class CIImage;


#import "NUSingleSourceDefinition.h"

@interface NUCIImageSourceDefinition : NUSingleSourceDefinition

@property (readonly) CIImage *image; // ivar: _image
@property (readonly) NSInteger orientation; // ivar: _orientation


-(NSInteger)mediaType;
-(id)generateSourceNodeWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithCIImage:(id)arg0 orientation:(NSInteger)arg1 ;


@end


#endif