// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSCROLLDIAGNOSTICSSERVICE_H
#define PXSCROLLDIAGNOSTICSSERVICE_H



#import "PXDiagnosticsService.h"

@interface PXScrollDiagnosticsService : PXDiagnosticsService



-(BOOL)canProvideContextualViewController;
-(id)contextualViewController;
-(id)scrollViewWithScrollAxis:(NSInteger)arg0 ;
-(id)title;


@end


#endif