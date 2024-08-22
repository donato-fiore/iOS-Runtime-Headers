// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFMULTISTATEIMAGEICONDESCRIPTOR_H
#define HFMULTISTATEIMAGEICONDESCRIPTOR_H

@class NSDictionary;


#import "HFImageIconDescriptor.h"

@interface HFMultistateImageIconDescriptor : HFImageIconDescriptor

@property (retain, nonatomic) NSDictionary *imageIdentifiersKeyedByPrimaryState; // ivar: _imageIdentifiersKeyedByPrimaryState


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)imageIdentifierForPrimaryState:(NSInteger)arg0 ;
-(id)initWithImageIdentifiersKeyedByPrimaryState:(id)arg0 ;
-(id)initWithImageIdentifiersKeyedByPrimaryState:(id)arg0 defaultImageIdentifier:(id)arg1 ;


@end


#endif