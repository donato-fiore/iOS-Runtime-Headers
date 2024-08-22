// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTLAYOUTSPACEBUNDLE_H
#define TSTLAYOUTSPACEBUNDLE_H


#import <Foundation/Foundation.h>

#import "TSTLayoutSpace.h"
#import "TSTLayout.h"

@interface TSTLayoutSpaceBundle : NSObject

@property (retain, nonatomic) TSTLayoutSpace *frozenHeaderColumnsSpace; // ivar: mFrozenHeaderColumnsSpace
@property (retain, nonatomic) TSTLayoutSpace *frozenHeaderCornerSpace; // ivar: mFrozenHeaderCornerSpace
@property (retain, nonatomic) TSTLayoutSpace *frozenHeaderRowsSpace; // ivar: mFrozenHeaderRowsSpace
@property (nonatomic) TSTLayout *layout; // ivar: mLayout
@property (retain, nonatomic) TSTLayoutSpace *repeatHeaderColumnsSpace; // ivar: mRepeatHeaderColumnsSpace
@property (retain, nonatomic) TSTLayoutSpace *repeatHeaderCornerSpace; // ivar: mRepeatHeaderCornerSpace
@property (retain, nonatomic) TSTLayoutSpace *repeatHeaderRowsSpace; // ivar: mRepeatHeaderRowsSpace
@property (retain, nonatomic) TSTLayoutSpace *space; // ivar: mSpace


-(BOOL)performActionOnFrozenLayoutSpaces:(id)arg0 ;
-(BOOL)performActionOnRepeatLayoutSpaces:(id)arg0 ;
-(id)description;
-(id)getSpaceContainingCellID:(struct ? )arg0 ;
-(id)initWithLayout:(id)arg0 ;
-(int)validateLayoutSpaces;
-(void)dealloc;
-(void)invalidateCoordinates;
-(void)invalidateTableOffsets;
-(void)performActionOnEachLayoutSpace:(id)arg0 ;


@end


#endif