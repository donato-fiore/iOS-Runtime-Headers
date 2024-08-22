// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRNORMALIZEDPOLYLINE_H
#define CRNORMALIZEDPOLYLINE_H

@class NSString, NSArray;
@protocol CRCodable, CRPolyline;

#import <Foundation/Foundation.h>

#import "CRImageSpacePolyline.h"

@interface CRNormalizedPolyline : NSObject <CRCodable, CRPolyline>



@property *CGPath _pathRef; // ivar: __pathRef
@property (readonly, copy) NSString *debugDescription;
@property (retain) CRImageSpacePolyline *denormalizedPolyline; // ivar: _denormalizedPolyline
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property CGSize normalizationSize; // ivar: _normalizationSize
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
-(id)initWithDenormalizedPolyline:(id)arg0 size:(struct CGSize )arg1 ;
-(id)initWithNormalizedPointValues:(id)arg0 size:(struct CGSize )arg1 ;
-(id)initWithNormalizedPoints:(struct CGPoint *)arg0 count:(NSUInteger)arg1 size:(struct CGSize )arg2 ;
-(id)initWithPolyline:(id)arg0 ;
-(id)polylineByAppendingPoint:(struct CGPoint )arg0 ;
-(id)polylineByAppendingPolyline:(id)arg0 ;
-(id)simplified;
-(void)appendPoint:(struct CGPoint )arg0 ;
-(void)appendPolyline:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumeratePoints:(id)arg0 ;


@end


#endif