// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMGESTUREMANAGER_H
#define CMGESTUREMANAGER_H


#import <Foundation/Foundation.h>


@interface CMGestureManager : NSObject {
    id *_internal;
}


@property (copy) id *gestureHandler;


+(BOOL)isGestureServiceAvailable;
+(BOOL)isGestureServiceEnabled;
+(void)setGestureServiceEnabled:(BOOL)arg0 ;
-(id)init;
-(id)initWithPriority:(int)arg0 ;
-(void)dealloc;


@end


#endif