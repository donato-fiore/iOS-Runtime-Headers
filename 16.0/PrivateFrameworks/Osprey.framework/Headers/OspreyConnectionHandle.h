// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OSPREYCONNECTIONHANDLE_H
#define OSPREYCONNECTIONHANDLE_H


#import <Foundation/Foundation.h>


@interface OspreyConnectionHandle : NSObject {
    id *_willRelease;
}


@property (readonly, nonatomic) id *connectionKey; // ivar: _connectionKey


-(id)initWithConnectionKey:(id)arg0 willRelease:(id)arg1 ;
-(void)dealloc;


@end


#endif