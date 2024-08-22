// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSIMAGEROWCELL_H
#define CPSIMAGEROWCELL_H

@class CPUIImageRowCell, NSString;
@protocol CPSCellSizable;



@interface CPSImageRowCell : CPUIImageRowCell <CPSCellSizable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(CGFloat)heightForListItem:(id)arg0 ;
// -(void)configureWithImageRowItem:(id)arg0 selectGridItemBlock:(id)arg1 selectTitleBlock:(unk)arg2 showActivityIndicator:(id)arg3  ;


@end


#endif