// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTLAYOUTPROCESSCHANGESACTIONS_H
#define TSTLAYOUTPROCESSCHANGESACTIONS_H


#import <Foundation/Foundation.h>


@interface TSTLayoutProcessChangesActions : NSObject

@property (nonatomic) TSUCellCoord editingCellIDForInvalidation; // ivar: _editingCellIDForInvalidation
@property (nonatomic) BOOL layoutInvalidate; // ivar: mLayoutInvalidate
@property (nonatomic) BOOL layoutInvalidateChildren; // ivar: mLayoutInvalidateChildren
@property (nonatomic) BOOL layoutInvalidateProvider; // ivar: mLayoutInvalidateProvider
@property (nonatomic) BOOL layoutInvalidateSize; // ivar: mLayoutInvalidateSize
@property (nonatomic) BOOL layoutInvalidateTableNameVisibility; // ivar: mLayoutInvalidateTableNameVisibility
@property (nonatomic) BOOL layoutSpacesInvalidateCoordinates; // ivar: mLayoutSpacesInvalidateCoordinates
@property (nonatomic) unsigned int layoutSpacesInvalidateCoordinatesAfterRow; // ivar: _layoutSpacesInvalidateCoordinatesAfterRow
@property (nonatomic) BOOL layoutSpacesInvalidateTableOffsets; // ivar: mLayoutSpacesInvalidateTableOffsets
@property (nonatomic) BOOL layoutUpdateChildren; // ivar: mLayoutUpdateChildren


-(id)init;
-(void)layoutSpacesInvalidateCoordinatesAfterRow:(id)arg0 ;


@end


#endif