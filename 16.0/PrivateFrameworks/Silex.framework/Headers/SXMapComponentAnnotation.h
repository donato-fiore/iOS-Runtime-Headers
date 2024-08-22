// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXMAPCOMPONENTANNOTATION_H
#define SXMAPCOMPONENTANNOTATION_H

@class MKPointAnnotation;


#import "SXMapItem.h"

@interface SXMapComponentAnnotation : MKPointAnnotation

@property (readonly, nonatomic) SXMapItem *mapItem; // ivar: _mapItem


-(id)initWithMapItem:(id)arg0 ;


@end


#endif