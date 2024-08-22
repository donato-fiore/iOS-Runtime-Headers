// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDRECENTSCONTROLLER_H
#define IMDRECENTSCONTROLLER_H

@class NSMutableDictionary, IMTimer;

#import <Foundation/Foundation.h>


@interface IMDRecentsController : NSObject {
    NSMutableDictionary *_typingContext;
    IMTimer *_typingContextTimer;
    NSMutableDictionary *_activeDeviceForHandle;
}




+(id)sharedInstance;
-(BOOL)hasRecentlyMessaged:(id)arg0 ;
-(id)activeDeviceForHandle:(id)arg0 ;
-(void)__pruneTypingContexts;
-(void)_setTimerForPruningTypingContext;
-(void)noteRecentMessageForPeople:(id)arg0 ;
-(void)updateLatestActiveDestination:(id)arg0 ForHandle:(id)arg1 incomingType:(unsigned char)arg2 ;


@end


#endif