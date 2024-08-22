// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKBGEOMETRY_H
#define UIKBGEOMETRY_H

@class NSString;
@protocol NSCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface UIKBGeometry : NSObject <NSCoding, NSCopying>



@property (nonatomic) BOOL explicitlySpecified; // ivar: m_explicitlySpecified
@property (nonatomic, setter=setH:) ? h; // ivar: m_h
@property (nonatomic) BOOL isTemplate; // ivar: m_isTemplate
@property (retain, nonatomic) NSString *name; // ivar: m_name
@property (nonatomic, setter=setPaddingBottom:) ? paddingBottom; // ivar: m_paddingBottom
@property (nonatomic, setter=setPaddingLeft:) ? paddingLeft; // ivar: m_paddingLeft
@property (nonatomic, setter=setPaddingRight:) ? paddingRight; // ivar: m_paddingRight
@property (nonatomic, setter=setPaddingTop:) ? paddingTop; // ivar: m_paddingTop
@property (nonatomic, setter=setW:) ? w; // ivar: m_w
@property (nonatomic, setter=setX:) ? x; // ivar: m_x
@property (nonatomic, setter=setY:) ? y; // ivar: m_y


+(id)codeStringForValue:(struct ? )arg0 ;
+(id)geometryWithOriginValue:(struct ? )arg0 sizeValue:(struct ? )arg1 ;
+(id)geometryWithRect:(struct CGRect )arg0 ;
// +(void)performOperations:(id)arg0 withScale:(unk)arg1  ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)usesAutomaticMetrics;
-(BOOL)usesPercentages;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initTemplateWithName:(id)arg0 rect:(struct ? )arg1 padding:(struct ? )arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 rect:(struct ? )arg1 padding:(struct ? )arg2 ;
-(id)overrideGeometry:(id)arg0 ;
-(struct CGRect )frame;
-(struct CGRect )frameWithContainingFrame:(struct CGRect )arg0 ;
-(struct CGRect )paddedFrameWithContainingFrame:(struct CGRect )arg0 ;
-(struct CGRect )paddedFrameWithResolvedFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif