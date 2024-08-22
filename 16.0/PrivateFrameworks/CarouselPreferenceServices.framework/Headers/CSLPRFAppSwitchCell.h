// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSLPRFAPPSWITCHCELL_H
#define CSLPRFAPPSWITCHCELL_H

@class PSSwitchTableCell;


#import "CSLPRFAppTableCellHelper.h"

@interface CSLPRFAppSwitchCell : PSSwitchTableCell {
    CSLPRFAppTableCellHelper *_cellHelper;
}




-(id)blankIcon;
-(id)getLazyIcon;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;


@end


#endif