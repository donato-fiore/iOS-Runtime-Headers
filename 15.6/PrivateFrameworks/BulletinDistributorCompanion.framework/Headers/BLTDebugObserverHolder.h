// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLTDEBUGOBSERVERHOLDER_H
#define BLTDEBUGOBSERVERHOLDER_H

@class BBObserver, NSString;
@protocol BBObserverDelegate, BLTDebugObserverWatchKitAppList;

#import <Foundation/Foundation.h>


@interface BLTDebugObserverHolder : NSObject <BBObserverDelegate>

 {
    BBObserver *_observer;
    id<BLTDebugObserverWatchKitAppList> *_wkAppList;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)startWithWKAppList:(id)arg0 ;
-(id)init;
-(id)initWithWKAppList:(id)arg0 ;
-(void)dealloc;
-(void)observer:(id)arg0 addBulletin:(id)arg1 forFeed:(NSUInteger)arg2 playLightsAndSirens:(BOOL)arg3 withReply:(id)arg4 ;


@end


#endif