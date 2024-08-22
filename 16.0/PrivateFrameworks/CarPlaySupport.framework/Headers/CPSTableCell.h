// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPSTABLECELL_H
#define CPSTABLECELL_H

@class CPUITableCell, NSString;
@protocol CPSCellSizable;



@interface CPSTableCell : CPUITableCell <CPSCellSizable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(CGFloat)heightForListItem:(id)arg0 ;
-(void)configureWithListItem:(id)arg0 spinning:(BOOL)arg1 environment:(id)arg2 playbackState:(NSInteger)arg3 ;


@end


#endif