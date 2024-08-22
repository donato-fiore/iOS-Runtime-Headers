// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGLAYOUTGUIDE_H
#define PXGLAYOUTGUIDE_H

@protocol PXGMutableLayoutGuide;


#import "PXObservable.h"
#import "PXGLayout.h"

@interface PXGLayoutGuide : PXObservable <PXGMutableLayoutGuide>



@property (weak, nonatomic) PXGLayout *referenceLayout; // ivar: _referenceLayout
@property (nonatomic) CGRect referenceRect; // ivar: _referenceRect


-(struct CGRect )rectInLayout:(id)arg0 ;
-(void)performChanges:(id)arg0 ;
-(void)setRect:(struct CGRect )arg0 inLayout:(id)arg1 ;


@end


#endif