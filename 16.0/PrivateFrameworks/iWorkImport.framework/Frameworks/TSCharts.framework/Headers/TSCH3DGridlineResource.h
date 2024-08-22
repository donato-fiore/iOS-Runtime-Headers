// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DGRIDLINERESOURCE_H
#define TSCH3DGRIDLINERESOURCE_H

@class TSDStroke;


#import "TSCH3DResource.h"
#import "TSCH3DAxisGridEnumerator.h"

@interface TSCH3DGridlineResource : TSCH3DResource {
    TSCH3DAxisGridEnumerator *_axis;
}


@property (readonly, nonatomic) BOOL enabled;
@property (readonly, nonatomic) float opacity;
@property (readonly, nonatomic) TSDStroke *stroke;


+(id)resourceWithAxisEnumerator:(id)arg0 ;
-(id)get;
-(id)initWithAxisEnumerator:(id)arg0 ;


@end


#endif