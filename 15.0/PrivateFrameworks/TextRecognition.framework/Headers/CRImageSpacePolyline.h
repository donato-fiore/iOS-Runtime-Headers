// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRIMAGESPACEPOLYLINE_H
#define CRIMAGESPACEPOLYLINE_H

@class NSString, NSArray;
@protocol CRCodable, CRPolyline;

#import <Foundation/Foundation.h>


@interface CRImageSpacePolyline : NSObject <CRCodable, CRPolyline>



@property *CGPath _pathRef; // ivar: __pathRef
@property *void _points; // ivar: __points
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) *CGPath path;
@property (readonly) NSUInteger pointCount;
@property (readonly) NSArray *pointValues;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)crCodableDataRepresentation;
-(id)init;
-(id)initWithCRCodableDataRepresentation:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPointValues:(id)arg0 ;
-(id)initWithPoints:(*void)arg0 ;
-(id)initWithPoints:(struct CGPoint *)arg0 count:(NSUInteger)arg1 ;
-(id)initWithPolyline:(id)arg0 ;
-(id)polylineByAppendingPoint:(struct CGPoint )arg0 ;
-(id)polylineByAppendingPolyline:(id)arg0 ;
-(id)simplified;
-(struct CGPath *)createPathWithTransformer:(id)arg0 ;
-(void)appendPoint:(struct CGPoint )arg0 ;
-(void)appendPolyline:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumeratePoints:(id)arg0 ;
// -(void)enumeratePointsWithTransformer:(id)arg0 block:(unk)arg1  ;


@end


#endif