// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUCROPASPECT_H
#define PUCROPASPECT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PUCropAspect : NSObject

@property (nonatomic) BOOL allowOrientationChange; // ivar: _allowOrientationChange
@property (readonly, nonatomic) CGFloat height; // ivar: _height
@property (readonly, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, nonatomic) CGFloat ratio;
@property (readonly, nonatomic) CGFloat width; // ivar: _width


+(id)allAspectsWithOriginalSize:(struct CGSize )arg0 currentSize:(struct CGSize )arg1 ;
+(id)originalAspectForWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCropAspect:(id)arg0 ;
-(BOOL)isEquivalentToCropAspect:(id)arg0 ;
-(BOOL)isFreeformCrop;
-(CGFloat)heightForWidth:(CGFloat)arg0 ;
-(CGFloat)widthForHeight:(CGFloat)arg0 ;
-(NSUInteger)hash;
-(id)_initWithWidth:(CGFloat)arg0 height:(CGFloat)arg1 localizedName:(id)arg2 ;
-(id)description;
-(id)init;
-(id)initWithWidth:(CGFloat)arg0 height:(CGFloat)arg1 ;
-(id)inverseAspect;
-(struct CGRect )constrainRect:(struct CGRect )arg0 boundingRect:(struct CGRect )arg1 boundingAngle:(CGFloat)arg2 minSize:(struct CGSize )arg3 ;


@end


#endif