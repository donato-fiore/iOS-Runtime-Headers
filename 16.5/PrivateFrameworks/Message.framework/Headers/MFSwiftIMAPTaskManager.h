// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFSWIFTIMAPTASKMANAGER_H
#define MFSWIFTIMAPTASKMANAGER_H


#import <Foundation/Foundation.h>


@interface MFSwiftIMAPTaskManager : NSObject {
    ? persistenceWorkloop;
    ? queue;
    ? logger;
    ? identifier;
    ? makeEngineAndAdaptor;
    ? _engine;
    ? _adaptor;
    ? engineIsolation;
    ? bodyFetchContext;
}




-(id)init;
-(id)initWithAccount:(id)arg0 ;
-(void)dealloc;
-(void)test_tearDown;


@end


#endif