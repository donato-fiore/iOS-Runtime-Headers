// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9SEYMOURUI19SESSIONROUTEMONITOR_H
#define _TTC9SEYMOURUI19SESSIONROUTEMONITOR_H

@class SwiftObject;



@interface _TtC9SeymourUI19SessionRouteMonitor : SwiftObject {
    ? eventHub;
    ? subscriptionToken;
    ? systemRouteCategoriesFetcher;
    ? currentSessionRouteCategory;
    ? currentRemoteDisplay;
    ? currentSystemRouteCategories;
}




-(void)onOutputDeviceChanged;


@end


#endif