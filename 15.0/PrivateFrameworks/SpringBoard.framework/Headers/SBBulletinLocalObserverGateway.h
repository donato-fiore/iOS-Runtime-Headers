// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBBULLETINLOCALOBSERVERGATEWAY_H
#define SBBULLETINLOCALOBSERVERGATEWAY_H

@class BBObserver, NSString;
@protocol BBObserverDelegate;

#import <Foundation/Foundation.h>


@interface SBBulletinLocalObserverGateway : NSObject <BBObserverDelegate>

 {
    BBObserver *_bbObserver;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(void)observer:(id)arg0 addBulletin:(id)arg1 forFeed:(NSUInteger)arg2 playLightsAndSirens:(BOOL)arg3 withReply:(id)arg4 ;


@end


#endif