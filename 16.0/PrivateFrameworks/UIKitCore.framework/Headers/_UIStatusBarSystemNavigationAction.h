// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISTATUSBARSYSTEMNAVIGATIONACTION_H
#define _UISTATUSBARSYSTEMNAVIGATIONACTION_H

@class UIStatusBarAction;



@interface _UIStatusBarSystemNavigationAction : UIStatusBarAction

@property (nonatomic) NSUInteger destination; // ivar: _destination


+(id)_navigationActionForDestination:(NSUInteger)arg0 ;
+(id)backNavigationAction;
+(id)forwardNavigationAction;


@end


#endif