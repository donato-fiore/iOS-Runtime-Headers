// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNIMAGETENSORDESCRIPTOR_H
#define VNIMAGETENSORDESCRIPTOR_H



#import "VNTensorDescriptor.h"

@interface VNImageTensorDescriptor : VNTensorDescriptor

@property (readonly, nonatomic) NSUInteger bytesPerRow; // ivar: _bytesPerRow
@property (readonly, nonatomic) unsigned int pixelFormatType; // ivar: _pixelFormatType
@property (readonly, nonatomic) NSUInteger pixelHeight; // ivar: _pixelHeight
@property (readonly, nonatomic) NSUInteger pixelWidth; // ivar: _pixelWidth


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 pixelFormatType:(unsigned int)arg1 pixelWidth:(NSUInteger)arg2 pixelHeight:(NSUInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif