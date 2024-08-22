// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDREFLECTION_H
#define TSDREFLECTION_H

@protocol TSDMixing, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface TSDReflection : NSObject <TSDMixing, NSCopying, NSMutableCopying>



@property (readonly, nonatomic) CGFloat fadeAcceleration; // ivar: mFadeAcceleration
@property (readonly, nonatomic) CGFloat opacity; // ivar: mOpacity


+(BOOL)canMixWithNilObjects;
+(id)instanceWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
+(id)reflection;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithOpacity:(CGFloat)arg0 ;
-(id)initWithOpacity:(CGFloat)arg0 fadeAcceleration:(CGFloat)arg1 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif