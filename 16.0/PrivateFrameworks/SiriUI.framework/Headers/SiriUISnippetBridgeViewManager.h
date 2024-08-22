// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIUISNIPPETBRIDGEVIEWMANAGER_H
#define SIRIUISNIPPETBRIDGEVIEWMANAGER_H


#import <Foundation/Foundation.h>


@interface SiriUISnippetBridgeViewManager : NSObject



+(id)sharedInstance;
-(void)insertBridgeViewIfNecessaryForCell:(id)arg0 controller:(id)arg1 currentSnippet:(id)arg2 previousSnippet:(id)arg3 bridgeSize:(struct CGSize )arg4 ;
-(void)removeBridgeViewsFromView:(id)arg0 ;


@end


#endif