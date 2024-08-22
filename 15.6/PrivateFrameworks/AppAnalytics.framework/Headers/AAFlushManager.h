// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAFLUSHMANAGER_H
#define AAFLUSHMANAGER_H


#import <Foundation/Foundation.h>


@interface AAFlushManager : NSObject {
    ? flushManager;
}




-(id)init;
-(id)initWithAppSessionManager:(id)arg0 client:(id)arg1 endpoint:(id)arg2 config:(id)arg3 ;
-(void)flushWithCompletion:(id)arg0 ;


@end


#endif