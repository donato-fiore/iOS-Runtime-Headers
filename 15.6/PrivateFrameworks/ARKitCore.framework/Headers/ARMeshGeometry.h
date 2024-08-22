// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARMESHGEOMETRY_H
#define ARMESHGEOMETRY_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ARGeometrySource.h"
#import "ARGeometryElement.h"

@interface ARMeshGeometry : NSObject <NSSecureCoding>



@property (retain, nonatomic) ARGeometrySource *classification; // ivar: _classification
@property (retain, nonatomic) ARGeometryElement *faces; // ivar: _faces
@property (retain, nonatomic) ARGeometrySource *normals; // ivar: _normals
@property (retain, nonatomic) ARGeometrySource *vertices; // ivar: _vertices


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVertices:(id)arg0 normals:(id)arg1 faces:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif