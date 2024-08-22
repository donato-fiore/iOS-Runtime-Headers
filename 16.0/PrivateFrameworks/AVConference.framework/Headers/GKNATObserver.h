// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKNATOBSERVER_H
#define GKNATOBSERVER_H

@protocol GKNATObserverDelegate;

#import <Foundation/Foundation.h>


@interface GKNATObserver : NSObject

@property NSObject<GKNATObserverDelegate> *delegate;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(id)initWithOptions:(id)arg0 ;
-(int)currentNATType;
-(void)shouldTryNATCheck;


@end


#endif