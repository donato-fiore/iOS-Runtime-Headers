// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIFILTERSHAPE_H
#define CIFILTERSHAPE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CIFilterShape : NSObject <NSCopying>

 {
    unsigned int _pad;
    *void _priv;
}


@property (readonly) CGRect extent;


+(id)_shapeInfinite;
+(id)shapeWithRect:(struct CGRect )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithRect:(struct CGRect )arg0 ;
-(id)initWithStruct:(struct filterShape *)arg0 ;
-(id)insetByX:(int)arg0 Y:(int)arg1 ;
-(id)intersectWith:(id)arg0 ;
-(id)intersectWithRect:(struct CGRect )arg0 ;
-(id)transformBy:(struct CGAffineTransform )arg0 interior:(BOOL)arg1 ;
-(id)unionWith:(id)arg0 ;
-(id)unionWithRect:(struct CGRect )arg0 ;
-(struct CGSRegionObject *)CGSRegion;
-(void)dealloc;


@end


#endif