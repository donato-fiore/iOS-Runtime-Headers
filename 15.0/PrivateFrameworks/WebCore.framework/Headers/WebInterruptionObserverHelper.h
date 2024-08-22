// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBINTERRUPTIONOBSERVERHELPER_H
#define WEBINTERRUPTIONOBSERVERHELPER_H


#import <Foundation/Foundation.h>


@interface WebInterruptionObserverHelper : NSObject {
    *void _callback;
}




-(id)initWithCallback:(*void)arg0 ;
-(void)clearCallback;
-(void)dealloc;
-(void)interruption:(id)arg0 ;


@end


#endif