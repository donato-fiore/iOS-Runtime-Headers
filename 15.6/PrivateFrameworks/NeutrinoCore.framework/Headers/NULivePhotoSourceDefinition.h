// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NULIVEPHOTOSOURCEDEFINITION_H
#define NULIVEPHOTOSOURCEDEFINITION_H



#import "NUSourceDefinition.h"

@interface NULivePhotoSourceDefinition : NUSourceDefinition

@property (readonly) NUSourceDefinition *image; // ivar: _image
@property (readonly) NUSourceDefinition *video; // ivar: _video


-(NSInteger)mediaType;
-(id)description;
-(id)init;
-(id)initWithImageSourceDefinition:(id)arg0 videoSourceDefinition:(id)arg1 ;
-(id)sourceContainerNodeWithIdentifier:(id)arg0 error:(*id)arg1 ;


@end


#endif