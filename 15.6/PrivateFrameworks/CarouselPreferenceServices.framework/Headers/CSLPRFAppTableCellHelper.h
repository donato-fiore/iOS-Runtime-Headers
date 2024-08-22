// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSLPRFAPPTABLECELLHELPER_H
#define CSLPRFAPPTABLECELLHELPER_H

@class PSTableCell;

#import <Foundation/Foundation.h>


@interface CSLPRFAppTableCellHelper : NSObject {
    BOOL _requestInProgress;
    PSTableCell *_tableCell;
}




-(id)blankIcon;
-(id)getLazyIcon;
-(id)initWithTableCell:(id)arg0 ;


@end


#endif