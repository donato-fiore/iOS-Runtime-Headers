// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TKTOKENWATCHERPROXY_H
#define TKTOKENWATCHERPROXY_H

@protocol TKProtocolTokenWatcherHost;

#import <Foundation/Foundation.h>

#import "TKTokenWatcher.h"

@interface TKTokenWatcherProxy : NSObject <TKProtocolTokenWatcherHost>

 {
    TKTokenWatcher *_watcher;
}




-(id)initWithWatcher:(id)arg0 ;
-(void)insertedToken:(id)arg0 ;
-(void)removedToken:(id)arg0 ;


@end


#endif