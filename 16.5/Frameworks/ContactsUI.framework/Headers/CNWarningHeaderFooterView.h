// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNWARNINGHEADERFOOTERVIEW_H
#define CNWARNINGHEADERFOOTERVIEW_H

@class NSString;


#import "CNContactTableViewHeaderFooterView.h"

@interface CNWarningHeaderFooterView : CNContactTableViewHeaderFooterView

@property (nonatomic) BOOL shouldDisplayWarningIcon; // ivar: _shouldDisplayWarningIcon
@property (retain, nonatomic) NSString *warningText; // ivar: _warningText


+(id)exclamationMark;
-(id)warningAttributedText;


@end


#endif