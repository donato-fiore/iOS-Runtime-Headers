// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFMULTISTATEIMAGEICONDESCRIPTOR_H
#define HFMULTISTATEIMAGEICONDESCRIPTOR_H

@class NSDictionary;


#import "HFImageIconDescriptor.h"

@interface HFMultistateImageIconDescriptor : HFImageIconDescriptor

@property (retain, nonatomic) NSDictionary *dictionaryKeyedByPrimaryState; // ivar: _dictionaryKeyedByPrimaryState


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)iconDescriptorForPrimaryState:(NSInteger)arg0 ;
-(id)initWithImageIdentifiersKeyedByPrimaryState:(id)arg0 ;
-(id)initWithImageIdentifiersKeyedByPrimaryState:(id)arg0 defaultImageIdentifier:(id)arg1 ;
-(id)initWithSymbolIconConfigurationsKeyedByPrimaryState:(id)arg0 ;
-(id)initWithSymbolIconConfigurationsKeyedByPrimaryState:(id)arg0 defaultPrimaryState:(NSInteger)arg1 ;
-(id)initWithSymbolIconConfigurationsKeyedByPrimaryState:(id)arg0 defaultSymbolIconConfiguration:(id)arg1 ;


@end


#endif