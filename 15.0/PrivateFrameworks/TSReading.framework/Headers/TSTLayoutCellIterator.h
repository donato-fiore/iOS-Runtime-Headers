// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTLAYOUTCELLITERATOR_H
#define TSTLAYOUTCELLITERATOR_H



#import "TSTCellIterator.h"
#import "TSTCell.h"
#import "TSTMasterLayout.h"
#import "TSTTableModel.h"

@interface TSTLayoutCellIterator : TSTCellIterator {
    ? mLayoutRange;
    ? mLayoutCellID;
    TSTCell *mLayoutCell;
    ? mModelIteratorData;
    BOOL mQueriedModel;
    BOOL mModelIteratorHasCell;
    unsigned short mNumberOfLayoutColumns;
    unsigned short mNumberOfColumns;
    unsigned short mNumberOfRows;
}


@property (readonly, nonatomic) TSTMasterLayout *masterLayout; // ivar: mMasterLayout
@property (readonly, nonatomic) TSTTableModel *tableModel;


-(id)initWithLayout:(id)arg0 ;
-(id)initWithLayout:(id)arg0 range:(struct ? )arg1 ;
-(id)initWithLayout:(id)arg0 range:(struct ? )arg1 flags:(NSUInteger)arg2 ;
-(id)initWithMasterLayout:(id)arg0 ;
-(id)initWithMasterLayout:(id)arg0 range:(struct ? )arg1 ;
-(id)initWithMasterLayout:(id)arg0 range:(struct ? )arg1 flags:(NSUInteger)arg2 ;
-(void)dealloc;


@end


#endif