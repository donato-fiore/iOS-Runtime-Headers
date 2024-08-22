// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOLABELGEOMETRY_H
#define GEOLABELGEOMETRY_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface GEOLabelGeometry : NSObject

@property (readonly, nonatomic) BOOL hasSelectionPolygon; // ivar: _hasSelectionPolygon
@property (readonly, nonatomic) NSArray *labelShape; // ivar: _labelShape


-(id)initWithGEOPDLabelGeometry:(id)arg0 ;
-(id)initWithLabelShape:(id)arg0 hasSelectionPolygon:(BOOL)arg1 ;


@end


#endif