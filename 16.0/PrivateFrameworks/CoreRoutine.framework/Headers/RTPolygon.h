// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RTPOLYGON_H
#define RTPOLYGON_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "RTCoordinate.h"

@interface RTPolygon : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) RTCoordinate *centroid; // ivar: _centroid
@property (readonly, nonatomic) NSArray *vertices; // ivar: _vertices


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPolygon:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCentroid:(id)arg0 vertices:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVertices:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif