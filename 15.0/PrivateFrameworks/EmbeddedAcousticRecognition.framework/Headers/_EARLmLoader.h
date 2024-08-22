// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _EARLMLOADER_H
#define _EARLMLOADER_H


#import <Foundation/Foundation.h>


@interface _EARLmLoader : NSObject {
    shared_ptr<quasar::LmLoader2> _loader;
}




+(void)initialize;
-(id)fetchOrLoadModelWithDirectory:(id)arg0 recognizer:(id)arg1 ;
-(id)init;
-(id)loadForRecognitionWithDirectory:(id)arg0 recognizer:(id)arg1 task:(id)arg2 applicationName:(id)arg3 ;
-(void)invalidate;


@end


#endif