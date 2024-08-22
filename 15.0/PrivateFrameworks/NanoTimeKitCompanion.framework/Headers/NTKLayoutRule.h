// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKLAYOUTRULE_H
#define NTKLAYOUTRULE_H

@class CLKDevice;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NTKLayoutRule : NSObject <NSCopying>



@property (nonatomic) BOOL clipsToReferenceFrame; // ivar: _clipsToReferenceFrame
@property (readonly, nonatomic) CLKDevice *device; // ivar: _device
@property (nonatomic) NSInteger horizontalLayout; // ivar: _horizontalLayout
@property (readonly, nonatomic) CGSize maximumSize;
@property (nonatomic) CGRect referenceFrame; // ivar: _referenceFrame
@property (nonatomic) NSInteger verticalLayout; // ivar: _verticalLayout


+(id)layoutRuleForDevice:(id)arg0 withReferenceFrame:(struct CGRect )arg1 horizontalLayout:(NSInteger)arg2 verticalLayout:(NSInteger)arg3 ;
+(id)layoutRuleForDevice:(id)arg0 withReferenceFrame:(struct CGRect )arg1 horizontalLayout:(NSInteger)arg2 verticalLayout:(NSInteger)arg3 clip:(BOOL)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)calculateLayoutFrameHeightForBoundsSize:(struct CGSize )arg0 ;
-(CGFloat)calculateLayoutFrameWidthForBoundsSize:(struct CGSize )arg0 ;
-(CGFloat)calculateLayoutFrameXOriginForBoundsSize:(struct CGSize )arg0 ;
-(CGFloat)calculateLayoutFrameYOriginForBoundsSize:(struct CGSize )arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initForDevice:(id)arg0 ;
-(id)layoutRuleByConvertingToCoordinateSpaceWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )calculateLayoutFrameForBoundsSize:(struct CGSize )arg0 ;
-(void)validate;


@end


#endif