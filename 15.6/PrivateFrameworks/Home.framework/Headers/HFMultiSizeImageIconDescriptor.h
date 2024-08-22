// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFMULTISIZEIMAGEICONDESCRIPTOR_H
#define HFMULTISIZEIMAGEICONDESCRIPTOR_H

@class NSDictionary;


#import "HFImageIconDescriptor.h"

@interface HFMultiSizeImageIconDescriptor : HFImageIconDescriptor

@property (retain, nonatomic) NSDictionary *imageIdentifiersKeyedBySize; // ivar: _imageIdentifiersKeyedBySize


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)imageIdentifierForSize:(id)arg0 ;
-(id)initWithImageIdentifiersKeyedBySize:(id)arg0 ;
-(id)initWithImageIdentifiersKeyedBySize:(id)arg0 defaultImageIdentifier:(id)arg1 ;


@end


#endif