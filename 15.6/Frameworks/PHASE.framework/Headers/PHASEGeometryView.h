// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASEGEOMETRYVIEW_H
#define PHASEGEOMETRYVIEW_H


#import <Foundation/Foundation.h>

#import "PHASEEngine.h"

@interface PHASEGeometryView : NSObject

@property (weak, nonatomic) PHASEEngine *engine; // ivar: _engine
@property (nonatomic) Handle64 geoShapeHandle; // ivar: _geoShapeHandle


+(void)geometryViewWithObject:(id)arg0 index:(NSUInteger)arg1 callback:(id)arg2 ;
-(id)init;
-(id)initWithEngine:(id)arg0 handle:(struct Handle64 )arg1 ;


@end


#endif