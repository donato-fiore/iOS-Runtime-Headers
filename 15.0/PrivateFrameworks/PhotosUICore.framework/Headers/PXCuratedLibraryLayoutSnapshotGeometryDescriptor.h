// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCURATEDLIBRARYLAYOUTSNAPSHOTGEOMETRYDESCRIPTOR_H
#define PXCURATEDLIBRARYLAYOUTSNAPSHOTGEOMETRYDESCRIPTOR_H

@class NSDictionary, NSIndexSet;

#import <Foundation/Foundation.h>


@interface PXCuratedLibraryLayoutSnapshotGeometryDescriptor : NSObject {
    NSDictionary *_sectionGeometryDescriptorsByIndexPath;
    CGFloat _intersectionSpacing;
}


@property (readonly, nonatomic) NSInteger dataSourceIdentifier; // ivar: _dataSourceIdentifier
@property (nonatomic) CGPoint offset; // ivar: _offset
@property (readonly, nonatomic) NSIndexSet *sections;
@property (readonly, nonatomic) NSInteger skimmingDataSourceIdentifier; // ivar: _skimmingDataSourceIdentifier
@property (readonly, nonatomic) CGRect visibleRect; // ivar: _visibleRect
@property (readonly, nonatomic) NSInteger zoomLevel; // ivar: _zoomLevel


-(id)description;
-(id)geometryDescriptorForSectionAtIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(id)init;
-(id)initWithLayout:(id)arg0 ;
-(void)compactifySectionsBeyondVisibleRectWithAnchorSection:(NSInteger)arg0 ;
-(void)extrapolateSectionsBetween:(NSInteger)arg0 and:(NSInteger)arg1 withAnchorSection:(NSInteger)arg2 ;


@end


#endif