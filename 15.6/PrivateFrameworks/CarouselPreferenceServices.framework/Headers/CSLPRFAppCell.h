// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSLPRFAPPCELL_H
#define CSLPRFAPPCELL_H

@class PSTableCell;


#import "CSLPRFAppTableCellHelper.h"

@interface CSLPRFAppCell : PSTableCell {
    CSLPRFAppTableCellHelper *_cellHelper;
}




-(id)blankIcon;
-(id)getLazyIcon;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;


@end


#endif