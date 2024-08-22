// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIBOUNDINGPATHBITMAP_H
#define _UIBOUNDINGPATHBITMAP_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _UIBoundingPathBitmap : NSObject <NSSecureCoding>



@property (readonly, nonatomic) _UIBoundingPathBitmapData bitmapData; // ivar: _bitmapData


+(BOOL)supportsSecureCoding;
-(id)_imageRepresentation;
-(id)boundingPathBitmapWithRect:(struct _UIIntegralRect )arg0 ;
-(id)boundingPathBitmapWithRect:(struct _UIIntegralRect )arg0 cornerRadii:(struct _UIIntegralCornerRadii )arg1 ;
-(id)debugQuickLookObject;
-(id)description;
-(id)initWithBitmapData:(struct _UIBoundingPathBitmapData )arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSize:(struct _UIIntegralSize )arg0 containsPoint:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif