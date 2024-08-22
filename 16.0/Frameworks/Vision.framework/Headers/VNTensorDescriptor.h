// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNTENSORDESCRIPTOR_H
#define VNTENSORDESCRIPTOR_H

@class NSString;


#import "VNProcessingDescriptor.h"
#import "VNTensorShape.h"

@interface VNTensorDescriptor : VNProcessingDescriptor {
    NSUInteger _calculatedStorageByteCount;
}


@property (readonly, nonatomic) NSUInteger dataType; // ivar: _dataType
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) VNTensorShape *shape; // ivar: _shape
@property (readonly, nonatomic) NSUInteger storageByteCount;


+(BOOL)supportsSecureCoding;
+(id)descriptorForEspressoBlobDimensions:(struct ? *)arg0 dataType:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 dataType:(NSUInteger)arg1 shape:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif