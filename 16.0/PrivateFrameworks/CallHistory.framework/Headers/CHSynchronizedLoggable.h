// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHSYNCHRONIZEDLOGGABLE_H
#define CHSYNCHRONIZEDLOGGABLE_H


#import <Foundation/Foundation.h>

#import "CHLogger.h"
#import "CHSynchronizable.h"

@interface CHSynchronizedLoggable : NSObject {
    CHLogger *_logger;
    CHSynchronizable *_synchronizable;
}




-(BOOL)executeSyncWithBOOL:(id)arg0 ;
-(id)executeSyncWithResult:(id)arg0 ;
-(id)initWithName:(char *)arg0 ;
-(id)initWithName:(char *)arg0 queue:(id)arg1 ;
-(id)logHandle;
-(id)queue;
-(void)execute:(id)arg0 ;
-(void)executeSync:(id)arg0 ;


@end


#endif