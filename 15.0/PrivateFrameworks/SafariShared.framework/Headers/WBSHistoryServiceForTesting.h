// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSHISTORYSERVICEFORTESTING_H
#define WBSHISTORYSERVICEFORTESTING_H

@class NSXPCListener;


#import "WBSHistoryService.h"

@interface WBSHistoryServiceForTesting : WBSHistoryService {
    NSXPCListener *_listener;
}




-(id)_createListener;
-(id)connectWithClass:(Class)arg0 ;
-(id)init;


@end


#endif