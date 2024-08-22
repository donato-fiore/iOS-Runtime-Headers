// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSREGIONSDEBUGVIEW_H
#define CSREGIONSDEBUGVIEW_H

@class NSArray;


#import "CSCoverSheetViewBase.h"

@interface CSRegionsDebugView : CSCoverSheetViewBase

@property (retain, nonatomic) NSArray *regions; // ivar: _regions


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif