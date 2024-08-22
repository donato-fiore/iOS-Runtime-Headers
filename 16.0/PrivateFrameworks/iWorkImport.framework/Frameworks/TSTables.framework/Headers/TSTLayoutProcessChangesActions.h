// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTLAYOUTPROCESSCHANGESACTIONS_H
#define TSTLAYOUTPROCESSCHANGESACTIONS_H


#import <Foundation/Foundation.h>


@interface TSTLayoutProcessChangesActions : NSObject

@property (nonatomic) TSUCellCoord editingCellIDForInvalidation; // ivar: _editingCellIDForInvalidation
@property (nonatomic) BOOL layoutInvalidate; // ivar: _layoutInvalidate
@property (nonatomic) BOOL layoutInvalidateChildren; // ivar: _layoutInvalidateChildren
@property (nonatomic) BOOL layoutInvalidateProvider; // ivar: _layoutInvalidateProvider
@property (nonatomic) BOOL layoutInvalidateSize; // ivar: _layoutInvalidateSize
@property (nonatomic) BOOL layoutInvalidateTableNameVisibility; // ivar: _layoutInvalidateTableNameVisibility
@property (nonatomic) BOOL layoutResetScaleToFit; // ivar: _layoutResetScaleToFit
@property (nonatomic) BOOL layoutSpacesInvalidateCoordinates; // ivar: _layoutSpacesInvalidateCoordinates
@property (nonatomic) unsigned int layoutSpacesInvalidateCoordinatesAfterRow; // ivar: _layoutSpacesInvalidateCoordinatesAfterRow
@property (nonatomic) BOOL layoutSpacesInvalidateTableOffsets; // ivar: _layoutSpacesInvalidateTableOffsets
@property (nonatomic) BOOL layoutUpdateChildren; // ivar: _layoutUpdateChildren


-(id)init;
-(void)layoutSpacesInvalidateCoordinatesAfterRow:(id)arg0 ;


@end


#endif