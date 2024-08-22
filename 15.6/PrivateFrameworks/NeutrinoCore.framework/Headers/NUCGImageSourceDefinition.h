// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUCGIMAGESOURCEDEFINITION_H
#define NUCGIMAGESOURCEDEFINITION_H



#import "NUSingleSourceDefinition.h"

@interface NUCGImageSourceDefinition : NUSingleSourceDefinition

@property (readonly) *CGImageSource imageSource; // ivar: _imageSource


-(NSInteger)mediaType;
-(id)generateSourceNodeWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithCGImageSource:(struct CGImageSource *)arg0 ;
-(void)dealloc;


@end


#endif