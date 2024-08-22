// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXGVIEWDEBUGHIERARCHYDUMPSERVICE_H
#define PXGVIEWDEBUGHIERARCHYDUMPSERVICE_H



#import "PXDiagnosticsService.h"
#import "PXGView.h"

@interface PXGViewDebugHierarchyDumpService : PXDiagnosticsService

@property (readonly, nonatomic) PXGView *gridView; // ivar: _gridView


-(BOOL)canPerformAction;
-(id)initWithItemProviders:(id)arg0 ;
-(id)title;
-(void)performAction;


@end


#endif