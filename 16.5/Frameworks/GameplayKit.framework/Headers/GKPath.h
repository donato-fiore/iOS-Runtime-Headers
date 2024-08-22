// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKPATH_H
#define GKPATH_H


#import <Foundation/Foundation.h>


@interface GKPath : NSObject {
    ? _pathway;
}


@property (nonatomic, getter=isCyclical) BOOL cyclical;
@property (readonly) NSUInteger numPoints;
@property (nonatomic) float radius;


+(id)pathWithFloat3Points:(*NSUInteger)arg0 count:(float)arg1 radius:(BOOL)arg2 cyclical;
+(id)pathWithGraphNodes:(id)arg0 radius:(float)arg1 ;
+(id)pathWithPoints:(*NSUInteger)arg0 count:(float)arg1 radius:(BOOL)arg2 cyclical;
-(BOOL)_cyclical;
-(id)float2AtIndex;
-(id)float3AtIndex;
-(id)initWithFloat3Points:(*NSUInteger)arg0 count:(float)arg1 radius:(BOOL)arg2 cyclical;
-(id)initWithGraphNodes:(id)arg0 radius:(float)arg1 ;
-(id)initWithPoints:(*NSUInteger)arg0 count:(float)arg1 radius:(BOOL)arg2 cyclical;
-(id)pointAtIndex;
-(struct PolylinePathway *)pathway;
-(void)set_cyclical:(BOOL)arg0 ;


@end


#endif