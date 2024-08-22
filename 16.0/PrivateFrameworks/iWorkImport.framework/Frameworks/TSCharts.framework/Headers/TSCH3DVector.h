// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DVECTOR_H
#define TSCH3DVECTOR_H

@protocol TSSPropertyValueArchiving, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface TSCH3DVector : NSObject <TSSPropertyValueArchiving, NSCopying, NSMutableCopying>



@property (readonly, nonatomic) float w; // ivar: _w
@property (readonly, nonatomic) float x; // ivar: _x
@property (readonly, nonatomic) float y; // ivar: _y
@property (readonly, nonatomic) float z; // ivar: _z


+(NSUInteger)hashVec4:(*void)arg0 ;
+(id)instanceWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
+(id)vector;
+(id)vectorWithVec2:(*void)arg0 ;
+(id)vectorWithVec3:(*void)arg0 ;
+(id)vectorWithVec4:(*void)arg0 ;
+(id)x:(float)arg0 y:(float)arg1 z:(float)arg2 ;
+(id)x:(float)arg0 y:(float)arg1 z:(float)arg2 w:(float)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(float)valueForDimension:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithVec2:(*void)arg0 ;
-(id)initWithVec3:(*void)arg0 ;
-(id)initWithVec4:(*void)arg0 ;
-(id)initWithX:(float)arg0 y:(float)arg1 z:(float)arg2 ;
-(id)initWithX:(float)arg0 y:(float)arg1 z:(float)arg2 w:(float)arg3 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(struct tvec2<float> )value2;
-(struct tvec3<float> )value3;
-(struct tvec4<float> )value;
-(struct tvec4<float> )value4;
-(void)didInitFromSOS;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif