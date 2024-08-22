// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BPSLINKCELL_H
#define BPSLINKCELL_H



#import "BPSBadgedTableCell.h"

@interface BPSLinkCell : BPSBadgedTableCell



+(CGFloat)scale;
+(id)_iconCache;
-(id)blankIcon;
-(id)getLazyIcon;
-(void)forceSynchronousIconLoadOnNextIconLoad;


@end


#endif