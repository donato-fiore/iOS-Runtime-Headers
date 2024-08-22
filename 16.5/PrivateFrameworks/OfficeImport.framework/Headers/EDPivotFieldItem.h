// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDPIVOTFIELDITEM_H
#define EDPIVOTFIELDITEM_H


#import <Foundation/Foundation.h>


@interface EDPivotFieldItem : NSObject {
    BOOL mChildItems;
    BOOL mExpanded;
    BOOL mCalculatedMember;
    BOOL mMissed;
    BOOL mHidden;
    BOOL mDetailsHidden;
    int mType;
    NSUInteger mItemIndex;
}




+(id)pivotFieldItem;
-(BOOL)calculatedMember;
-(BOOL)childItems;
-(BOOL)detailsHidden;
-(BOOL)expanded;
-(BOOL)hidden;
-(BOOL)missed;
-(NSUInteger)itemIndex;
-(id)description;
-(id)init;
-(int)type;
-(void)setCalculatedMember:(BOOL)arg0 ;
-(void)setChildItems:(BOOL)arg0 ;
-(void)setDetailsHidden:(BOOL)arg0 ;
-(void)setExpanded:(BOOL)arg0 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)setItemIndex:(NSUInteger)arg0 ;
-(void)setMissed:(BOOL)arg0 ;
-(void)setType:(int)arg0 ;


@end


#endif