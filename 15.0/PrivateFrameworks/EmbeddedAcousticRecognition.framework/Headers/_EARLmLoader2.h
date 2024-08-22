// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _EARLMLOADER2_H
#define _EARLMLOADER2_H


#import <Foundation/Foundation.h>


@interface _EARLmLoader2 : NSObject {
    shared_ptr<quasar::LmLoader2> _loader;
}




+(void)initialize;
-(id)fetchOrLoadModelWithDirectory:(id)arg0 recognizer:(id)arg1 ;
-(id)init;
-(id)initWithRoot:(id)arg0 ;
-(id)loadForRecognitionWithDirectory:(id)arg0 recognizer:(id)arg1 task:(id)arg2 applicationName:(id)arg3 ;
-(void)invalidate;


@end


#endif