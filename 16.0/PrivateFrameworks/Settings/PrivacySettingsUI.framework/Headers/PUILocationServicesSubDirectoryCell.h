// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUILOCATIONSERVICESSUBDIRECTORYCELL_H
#define PUILOCATIONSERVICESSUBDIRECTORYCELL_H

@class PSTableCell;


#import "PUILocationUsageMixin.h"

@interface PUILocationServicesSubDirectoryCell : PSTableCell

@property (readonly, nonatomic) PUILocationUsageMixin *location; // ivar: _location


-(BOOL)canReload;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(void)layoutSubviews;


@end


#endif