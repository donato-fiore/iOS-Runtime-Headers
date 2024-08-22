// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IPAIMAGEGEOMETRY_H
#define IPAIMAGEGEOMETRY_H

@class NSString;
@protocol IPAQuadGeometry, IPAImageGeometry;

#import <Foundation/Foundation.h>


@interface IPAImageGeometry : NSObject <IPAQuadGeometry, IPAImageGeometry>

 {
    NSString *_identifier;
    CGRect _extent;
    CGRect _domain;
    Quad2d _imageQuad;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)inputGeometryWithImageSize:(struct CGSize )arg0 ;
+(void)addLineFromP0:(struct CGPoint )arg0 P1:(struct CGPoint )arg1 withLabel:(id)arg2 toScene:(id)arg3 ;
+(void)addPoint:(struct CGPoint )arg0 radius:(CGFloat)arg1 withLabel:(id)arg2 toScene:(id)arg3 ;
+(void)addQuadV0:(struct CGPoint )arg0 V1:(struct CGPoint )arg1 V2:(struct CGPoint )arg2 V3:(struct CGPoint )arg3 withLabel:(id)arg4 toScene:(id)arg5 ;
+(void)addRect:(struct CGRect )arg0 withLabel:(id)arg1 toScene:(id)arg2 ;
+(void)clearScene:(id)arg0 ;
-(id)identifier;
-(id)init;
-(id)initWithIdentifier:(id)arg0 extent:(struct CGRect )arg1 ;
-(id)initWithIdentifier:(id)arg0 extent:(struct CGRect )arg1 domain:(struct CGRect )arg2 ;
-(id)initWithIdentifier:(id)arg0 extent:(struct CGRect )arg1 imageQuad:(struct Quad2d *)arg2 ;
-(struct CGRect )domain;
-(struct CGRect )extent;
-(struct Quad2d )imageQuad;


@end


#endif