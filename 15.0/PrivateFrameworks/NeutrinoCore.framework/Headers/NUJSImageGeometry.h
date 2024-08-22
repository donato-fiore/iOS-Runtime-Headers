// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUJSIMAGEGEOMETRY_H
#define NUJSIMAGEGEOMETRY_H

@protocol NUJSImageGeometryExport;


#import "NUJSProxy.h"
#import "NUImageGeometry.h"
#import "NUJSScale.h"

@interface NUJSImageGeometry : NUJSProxy <NUJSImageGeometryExport>



@property (readonly) CGRect extent;
@property (readonly) NUImageGeometry *geometry;
@property (readonly) NSInteger orientation;
@property (readonly) NUJSScale *scale;
@property (readonly) CGSize scaledSize;
@property (readonly) CGSize size;


-(id)initWithGeometry:(id)arg0 context:(id)arg1 ;
-(id)initWithRepresentedObject:(id)arg0 context:(id)arg1 ;


@end


#endif