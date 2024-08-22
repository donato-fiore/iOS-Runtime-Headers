// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDPIVOTFIELD_H
#define EDPIVOTFIELD_H


#import <Foundation/Foundation.h>

#import "EDCollection.h"

@interface EDPivotField : NSObject {
    int mAxis;
    BOOL mCompact;
    BOOL mDataField;
    BOOL mShowDefaultSubTotal;
    BOOL mInsertBlankRow;
    BOOL mOutlineItems;
    BOOL mShowAllItems;
    BOOL mSubtotalTop;
    NSUInteger mNumFmtId;
    EDCollection *mPivotFieldItems;
}




+(id)pivotField;
-(BOOL)compact;
-(BOOL)dataField;
-(BOOL)insertBlankRow;
-(BOOL)outlineItems;
-(BOOL)showAllItems;
-(BOOL)showDefaultSubTotal;
-(BOOL)subtotalTop;
-(NSUInteger)numFmtId;
-(id)description;
-(id)init;
-(id)pivotFieldItems;
-(int)axis;
-(void)setAxis:(int)arg0 ;
-(void)setCompact:(BOOL)arg0 ;
-(void)setDataField:(BOOL)arg0 ;
-(void)setInsertBlankRow:(BOOL)arg0 ;
-(void)setNumFmtId:(NSUInteger)arg0 ;
-(void)setOutlineItems:(BOOL)arg0 ;
-(void)setShowAllItems:(BOOL)arg0 ;
-(void)setShowDefaultSubTotal:(BOOL)arg0 ;
-(void)setSubtotalTop:(BOOL)arg0 ;


@end


#endif