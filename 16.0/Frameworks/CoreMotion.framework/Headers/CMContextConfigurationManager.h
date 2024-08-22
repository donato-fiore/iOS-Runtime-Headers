// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMCONTEXTCONFIGURATIONMANAGER_H
#define CMCONTEXTCONFIGURATIONMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CMContextConfigurationManager : NSObject {
    *void fLocationdConnection;
    NSObject<OS_dispatch_queue> *fInternalQueue;
}




-(id)init;
-(void)connect;
-(void)dealloc;
-(void)disconnect;
-(void)writeContextConfiguration:(id)arg0 withHandler:(id)arg1 ;


@end


#endif