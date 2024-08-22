// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTLAYOUTSPACEBUNDLE_H
#define TSTLAYOUTSPACEBUNDLE_H


#import <Foundation/Foundation.h>

#import "TSTLayoutSpace.h"
#import "TSTLayout.h"

@interface TSTLayoutSpaceBundle : NSObject

@property (retain, nonatomic) TSTLayoutSpace *frozenHeaderColumnsSpace; // ivar: _frozenHeaderColumnsSpace
@property (retain, nonatomic) TSTLayoutSpace *frozenHeaderCornerSpace; // ivar: _frozenHeaderCornerSpace
@property (retain, nonatomic) TSTLayoutSpace *frozenHeaderRowsSpace; // ivar: _frozenHeaderRowsSpace
@property (weak, nonatomic) TSTLayout *layout; // ivar: _layout
@property (retain, nonatomic) TSTLayoutSpace *repeatHeaderColumnsSpace; // ivar: _repeatHeaderColumnsSpace
@property (retain, nonatomic) TSTLayoutSpace *repeatHeaderCornerSpace; // ivar: _repeatHeaderCornerSpace
@property (retain, nonatomic) TSTLayoutSpace *repeatHeaderRowsSpace; // ivar: _repeatHeaderRowsSpace
@property (retain, nonatomic) TSTLayoutSpace *space; // ivar: _space


-(BOOL)enumerateFrozenLayoutSpacesUsingBlock:(id)arg0 ;
-(BOOL)enumerateRepeatLayoutSpacesUsingBlock:(id)arg0 ;
-(id)getSpaceContainingCellID:(struct TSUCellCoord )arg0 ;
-(id)initWithLayout:(id)arg0 ;
-(int)validateLayoutSpaces;
-(void)enumerateLayoutSpacesUsingBlock:(id)arg0 ;
-(void)invalidateCoordinates;
-(void)invalidateCoordinatesAfterColumn:(unsigned short)arg0 ;
-(void)invalidateCoordinatesAfterRow:(unsigned int)arg0 ;
-(void)invalidateCoordinatesForEditingCellID:(struct TSUCellCoord )arg0 ;
-(void)invalidateTableOffsets;


@end


#endif