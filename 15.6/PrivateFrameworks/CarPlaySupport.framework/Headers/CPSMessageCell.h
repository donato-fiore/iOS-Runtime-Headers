// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPSMESSAGECELL_H
#define CPSMESSAGECELL_H

@class CPUIMessageCell, NSString;
@protocol CPSCellSizable;



@interface CPSMessageCell : CPUIMessageCell <CPSCellSizable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(CGFloat)heightForListItem:(id)arg0 ;
-(void)configureWithMessageListItem:(id)arg0 ;


@end


#endif