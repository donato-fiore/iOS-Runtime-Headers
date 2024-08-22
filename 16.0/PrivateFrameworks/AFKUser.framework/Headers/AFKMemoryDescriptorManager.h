// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFKMEMORYDESCRIPTORMANAGER_H
#define AFKMEMORYDESCRIPTORMANAGER_H


#import <Foundation/Foundation.h>


@interface AFKMemoryDescriptorManager : NSObject {
    unsigned int _service;
}


@property (readonly, nonatomic) unsigned int connect; // ivar: _connect
@property (readonly, nonatomic) NSUInteger regID; // ivar: _regID


+(id)withService:(unsigned int)arg0 ;
-(id)initWithService:(unsigned int)arg0 ;
-(void)dealloc;


@end


#endif