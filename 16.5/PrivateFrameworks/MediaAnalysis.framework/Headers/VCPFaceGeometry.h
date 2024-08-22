// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPFACEGEOMETRY_H
#define VCPFACEGEOMETRY_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VCPFaceGeometry : NSObject <NSSecureCoding>

 {
    ? _vertices;
}


@property (readonly, nonatomic) NSUInteger vertexCount; // ivar: _vertexCount
@property ? vertices;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithVertices:(*NSUInteger)arg0 vertexCount;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif