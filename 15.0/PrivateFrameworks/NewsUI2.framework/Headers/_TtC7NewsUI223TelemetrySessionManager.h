// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC7NEWSUI223TELEMETRYSESSIONMANAGER_H
#define _TTC7NEWSUI223TELEMETRYSESSIONMANAGER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _TtC7NewsUI223TelemetrySessionManager : NSObject {
    ? sessionManager;
    ? sessionObserver;
    ? sceneSessionIdentifier;
}


@property (nonatomic, copy) NSString *sceneSessionIdentifier;


-(id)init;


@end


#endif