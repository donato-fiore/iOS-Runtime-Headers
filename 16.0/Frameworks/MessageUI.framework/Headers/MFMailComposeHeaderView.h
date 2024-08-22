// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFMAILCOMPOSEHEADERVIEW_H
#define MFMAILCOMPOSEHEADERVIEW_H

@class CNComposeHeaderView;


#import "MFComposeDisplayMetrics.h"

@interface MFMailComposeHeaderView : CNComposeHeaderView

@property (retain, nonatomic) MFComposeDisplayMetrics *displayMetrics; // ivar: _displayMetrics


-(void)layoutMarginsDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif