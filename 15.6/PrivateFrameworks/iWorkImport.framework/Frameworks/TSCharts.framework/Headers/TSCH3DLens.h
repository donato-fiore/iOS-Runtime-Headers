// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DLENS_H
#define TSCH3DLENS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSCH3DLens : NSObject <NSCopying>



@property (nonatomic) float far; // ivar: _far
@property (nonatomic) float near; // ivar: _near


+(id)lens;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)calculateCullingPlanes:(*void)arg0 ;


@end


#endif