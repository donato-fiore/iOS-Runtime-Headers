// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXKEYASSETHACKSERVICE_H
#define PXKEYASSETHACKSERVICE_H



#import "PXDiagnosticsService.h"

@interface PXKeyAssetHackService : PXDiagnosticsService



+(BOOL)keyAssetHackServiceIsEnabled;
-(BOOL)canPerformAction;
-(BOOL)shouldSetKeyAssetForHighlight:(id)arg0 ;
-(id)asset;
-(id)title;
-(void)performAction;


@end


#endif