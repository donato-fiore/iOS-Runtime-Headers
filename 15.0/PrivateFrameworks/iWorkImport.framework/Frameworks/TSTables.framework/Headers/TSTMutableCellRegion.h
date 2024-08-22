// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTMUTABLECELLREGION_H
#define TSTMUTABLECELLREGION_H



#import "TSTCellRegion.h"

@interface TSTMutableCellRegion : TSTCellRegion



-(void)addColumns:(id)arg0 ;
-(void)addRange:(struct TSUCellRect )arg0 ;
-(void)addRegion:(id)arg0 ;
-(void)addRows:(id)arg0 ;
-(void)clear;
-(void)p_addRange:(struct TSUCellRect )arg0 calculateAncillaryInfo:(BOOL)arg1 ;
-(void)removeColumns:(id)arg0 ;
-(void)removeRows:(id)arg0 ;


@end


#endif