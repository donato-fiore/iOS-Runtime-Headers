// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OZNOTIFICATIONSTUB_H
#define OZNOTIFICATIONSTUB_H

@class NSTimer;

#import <Foundation/Foundation.h>


@interface OZNotificationStub : NSObject {
    NSTimer *_pTimer;
    *void _pDocument;
}




-(id)initWithOZDocument:(*void)arg0 useTimer:(BOOL)arg1 ;
-(void)createTimer;
-(void)dealloc;
-(void)fire;
-(void)processNotifications:(id)arg0 ;
-(void)releaseTimer;


@end


#endif